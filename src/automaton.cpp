// ---------------------------------------------
//  automaton.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include "automaton.h"
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
    DEBUGINFO("Automaton::getDerivationTree - BEGIN");
    transition();
    DEBUGINFO("Automaton::getDerivationTree - END");
    return symbolStack.top();
}

void Automaton::transition()
{
    DEBUGINFO(" - - Automaton::transition");
    TRACE("    state ");
    TRACE(*stateStack.top());
    TRACE(" ( ");
    TRACE(SYM[*currentSymbol]);
    TRACE(" ) ");
    TRACE("\n");
    TRACE("\n");
    
    // Do the next transition
    if (!stateStack.empty())
    {
        stateStack.top()->transition(*this,currentSymbol);
    }
}

void Automaton::read()
{
    DEBUGINFO(" - - Automaton::read");
    TRACE("    ");
    TRACE("new token: ");
    
    // Go to the next symbol
    input.pop_front();
    
    // Reset the current Symbol
    if (input.empty())
    {
        // Should never occur as the lexer push the end symbol to the back of input
        DEBUGWARN("End of the input reached\n");
        currentSymbol = new S_End();
    }
    else
    {
        // Correct case
        currentSymbol = input.front();
    }
    
    TRACE(SYM[*currentSymbol]);
    TRACE("\n");
    TRACE("\n");
}

void Automaton::shift(Symbol * symbol, State * state)
{
    DEBUGINFO("Automaton::shift:");
    TRACE("    ");
    TRACE("stacked STATE: ");
    TRACE(*state);
    TRACE(" | SYMBOL: ");
    TRACE(SYM[*symbol]);
    TRACE("\n");
    TRACE("\n");
    
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
    DEBUGINFO("Automaton::reduce:");

    // Pop elements from the stacks
    std::deque<Symbol*> * symbols = new std::deque<Symbol*>();
    for (unsigned int i = 0; i < RULES[numRule-1]; i++)
    {
        symbols->push_front(symbolStack.top());
        symbolStack.pop();
        delete stateStack.top();
        stateStack.pop();
    }
    
    // Push the new symbol
    Symbol * symbol = getSymbol(numRule, *symbols);
    symbolStack.push(symbol);
    
    std::cout << *symbol << std::endl;
    
    TRACE("    ");
    TRACE("used RULE: ");
    TRACE(numRule);
    TRACE(" | used STATE: ");
    TRACE(*stateStack.top());
    TRACE(" | created SYMBOL: ");
    TRACE(SYM[*symbolStack.top()]);
    TRACE("\n");

    
    // Push the new state
    State * state = stateStack.top()->getNextState(symbol);
    stateStack.push(state);
    
    TRACE("    ");
    TRACE("stacked STATE: ");
    TRACE(*state);
    TRACE(" | SYMBOL: ");
    TRACE(SYM[*symbol]);
    TRACE("\n");
    TRACE("\n");
    
    // Continue 
    transition();
}

void Automaton::error()
{
    DEBUGERR("Automaton::error\n");
    
    read();
    
    // Continue
    transition();
}

void Automaton::accept()
{
    DEBUGINFO("Automaton::accept\n");
    // Do nothing, just end the process
}

Symbol* Automaton::getSymbol(int numRule, std::deque<Symbol*> & symbols)
{
    if (symbols.size() != RULES[numRule-1])
    {
        DEBUGERR("Automaton::getSymbol:ERROR CASE\n");
        // ERROR CASE 
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
    DEBUGERR("Automaton::getSymbol:ERROR CASE\n");
    
    return 0;
}

