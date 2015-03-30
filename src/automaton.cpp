// ---------------------------------------------
//  automaton.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include "automaton.h"
#include "exception/automatonException.h"
#include "state/state0.h"
#include "symbol/symbol.h"
#include "debugger.h"

#include <iostream>
#include <vector>
#include <iterator>

#include "symbol/p.h"
#include "symbol/bditer.h"
#include "symbol/biiter.h"
#include "symbol/dvar.h"
#include "symbol/idliter.h"
#include "symbol/dconst.h"
#include "symbol/iniliter.h"
#include "symbol/ini.h"
#include "symbol/iecrire.h"
#include "symbol/iaff.h"
#include "symbol/ilire.h"
#include "symbol/eprime.h"
#include "symbol/eplus.h"
#include "symbol/eminus.h"
#include "symbol/et.h"
#include "symbol/tmult.h"
#include "symbol/tdivide.h"
#include "symbol/tf.h"
#include "symbol/fpar.h"
#include "symbol/fid.h"
#include "symbol/fnum.h"
#include "symbol/end.h"

using namespace std;

const unsigned int RULES[RULES_NUMBER] =
    {2, 3, 3, 3, 3, 3, 3, 3, 2, 3, 2, 1, 3, 3, 1, 3, 3, 1, 3, 1, 1, 0, 0, 0, 0};

// Automaton constructor
Automaton::Automaton(std::deque<Symbol*> input)
    : input(input)
{
	// Stack initialization :
	stateStack.push(new State0());
    
    // Set the current Symbol
    currentSymbol = input.empty() ? 0 : input.front();
}

Automaton::~Automaton()
{
	while(!this->input.empty())
	{	
		delete this->input.front();
		this->input.pop_front();
	}
    
	while(!this->symbolStack.empty())
	{	
		delete this->symbolStack.top();
		this->symbolStack.pop();
	}
	
	while(!stateStack.empty())
	{		
		delete this->stateStack.top();
		this->stateStack.pop();
	}
}

Symbol* Automaton::getDerivationTree()
{
    // Begin the construction
    transition();
    
    if (symbolStack.empty())
    {
        // ERROR CASE
        throw AutomatonException(EMPTY_STATE_STACK_ERROR);
    }
    
    // Return the root symbol
    return symbolStack.top();
}

void Automaton::transition()
{
    if (stateStack.empty())
    {
        // ERROR CASE
        throw AutomatonException(EMPTY_STATE_STACK_ERROR);
    }
    
    // Do the next transition
    stateStack.top()->transition(*this,currentSymbol);
}

void Automaton::read()
{
    // Go to the next symbol
    input.pop_front();
    
    if (input.empty())
    {
        // ERROR CASE
        throw AutomatonException(EMPTY_INPUT_ERROR);
    }
    
    // Reset the current Symbol
    currentSymbol = input.front();
}

void Automaton::shift(Symbol * symbol, State * state)
{
    // Push the elements on the stacks
    symbolStack.push(symbol);
    stateStack.push(state);
    
    // Go read the next token
    read();
    
    // Continue
    transition();
}
 
void Automaton::reduce(int numRule)
{
    // Pop elements from the stacks
    std::deque<Symbol*> symbols = std::deque<Symbol*>();
    for (unsigned int i = 0; i < RULES[numRule-1]; i++)
    {
        if (!symbolStack.empty())
        {
            symbols.push_front(symbolStack.top());
            symbolStack.pop();
        }
        
        if (!stateStack.empty())
        {
            delete stateStack.top();
            stateStack.pop();
        }
    }
    
    if (stateStack.empty())
    {
        // ERROR CASE
        throw AutomatonException(EMPTY_STATE_STACK_ERROR);
    }
    
    // Push the new symbol
    Symbol * symbol = getSymbol(numRule, symbols);
    symbolStack.push(symbol);
    
    if (symbolStack.empty())
    {
        // ERROR CASE
        throw AutomatonException(EMPTY_SYMBOL_STACK_ERROR);
    }
    
    // Push the new state
    State * state = stateStack.top()->getNextState(symbol);
    stateStack.push(state);;
    
    // Continue 
    transition();
}

void Automaton::error()
{
    //DEBUGERR("Automaton::error");
    
    // Try the next token
    read();
    
    // Continue
    transition();
}

void Automaton::accept()
{
    // Do nothing, just end the process
}

void notifyMissingSymbol(Symbol* symbol)
{
}

Symbol* Automaton::getSymbol(int numRule, std::deque<Symbol*> & symbols)
{
    if (symbols.size() != RULES[numRule-1])
    {
        // ERROR CASE
        throw AutomatonException(RULES_ERROR);
    }
    
    switch (numRule)
    {
        case 1:  // P → BD BI
            return new S_P((S_Bd*)symbols[0], (S_Bi*)symbols[1]);
            
        case 2:  // BD → BD D pv
            delete symbols[2];
            return new S_Bditer((S_Bd*)symbols[0], (S_D*)symbols[1]);
            
        case 3:  // BI → BI I pv
            delete symbols[2];
            return new S_Biiter((S_Bi*)symbols[0], (S_I*)symbols[1]);
            
        case 4:  // D → var id IDL
            delete symbols[0];
            return new S_Dvar((S_Id*)symbols[1], (S_Idl*)symbols[2]);
            
        case 5:  // IDL → IDL vir id
            delete symbols[1];
            return new S_Idliter((S_Idl*)symbols[0], (S_Id*)symbols[2]);
            
        case 6:  // D → const INI INIL
            delete symbols[0];
            return new S_Dconst((S_Ini*)symbols[1], (S_Inil*)symbols[2]);
            
        case 7:  // INIL → INIL vir INI
            delete symbols[1];
            return new S_Iniliter((S_Inil*)symbols[0], (S_Ini*)symbols[2]);
            
        case 8:  // INI → id eg num
            delete symbols[1];
            return new S_Ini((S_Id*)symbols[0], (S_Num*)symbols[2]);
            
        case 9:  // I → ecrire E'
            delete symbols[0];
            return new S_Iecrire((S_Eprime*)symbols[1]);
            
        case 10: // I → id aff E'
            delete symbols[1];
            return new S_Iaff((S_Id*)symbols[0], (S_Eprime*)symbols[2]);
            
        case 11: // I → lire id
            delete symbols[0];
            return new S_Ilire((S_Id*)symbols[1]);
            
        case 12: // E' → E
            return new S_Eprime((S_E*)symbols[0]);
            
        case 13: // E → E + T
            delete symbols[1];
            return new S_Eplus((S_E*)symbols[0], (S_T*)symbols[2]);
            
        case 14: // E → E - T
            delete symbols[1];
            return new S_Eminus((S_E*)symbols[0], (S_T*)symbols[2]);
            
        case 15: // E → T
            return new S_Et((S_T*)symbols[0]);
            
        case 16: // T → T * F
            delete symbols[1];
            return new S_Tmult((S_T*)symbols[0], (S_F*)symbols[2]);
            
        case 17: // T → T / F
            delete symbols[1];
            return new S_Tdivide((S_T*)symbols[0], (S_F*)symbols[2]);
            
        case 18: // T → F
            return new S_Tf((S_F*)symbols[0]);
            
        case 19: // F → (E)
            delete symbols[0];
            delete symbols[2];
            return new S_Fpar((S_E*)symbols[1]);
            
        case 20: // F → id
            return new S_Fid((S_Id*)symbols[0]);
            
        case 21: // F → num
            return new S_Fnum((S_Num*)symbols[0]);
            
        case 22: // BD → ɛ
            return new S_Bd();
            
        case 23: // BI → ɛ
            return new S_Bi();
            
        case 24: // IDL → ɛ
            return new S_Idl();
            
        case 25: // INIL → ɛ
            return new S_Inil();
            
        default:
            break;
    }
    
    // ERROR CASE
    throw AutomatonException(RULES_ERROR);
    
    return 0;
}

