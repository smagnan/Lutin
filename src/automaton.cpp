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

using namespace std;

// Automaton constructor
Automaton::Automaton(Interpreter *interp,Lexer *lex) 
{
	this->interpreter = interp;
	this->lexer = lex;
	// Stack initialization :
	stateStack.push(new State0());
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

void Automaton::read()
{
	//Prends le prochain jeton (voir si l'automate a déjà toute la liste ou pas)
	//Appelle la transition de l'état courant (sommet de la pile) avec le symnbole lu
	std::vector<Symbol*> symbols;
	// TODO use lexer
	while(this->lexer->hasNext()) 
	{
		symbols = this->lexer->getSymbols();
		for(std::vector<Symbol*>::iterator it = symbols.begin(); it != symbols.end(); ++it) 
		{
		    this->stateStack.top()->transition(*this,*it);
		}
	}
}

void Automaton::shift(Symbol * symbol, State * state)
{
    symbolStack.push(symbol);
    stateStack.push(state);
}

void Automaton::reduce(int numRule)
{
    for (int i = 0; i < rules[numRule].second; i++)
    {
        symbolStack.pop();
        stateStack.pop();
    }
    
}

void Automaton::error()
{
    
}

void Automaton::accept()
{
    
}

Symbol* Automaton::getSymbol(int numRule, std::vector<Symbol*> & symbols)
{
    switch (numRule)
    {
        case 1:
            if (symbols.size() != 2) break;
            return new S_P((S_Bd*)symbols[0], (S_Bi*)symbols[1]);
        case 2:
            if (symbols.size() != 3) break;
            return new S_Bditer((S_Bd*)symbols[0], (S_D*)symbols[1]);
        case 3:
            if (symbols.size() != 3) break;
            return new S_Biiter((S_Bi*)symbols[0], (S_I*)symbols[1]);
        case 4:
            if (symbols.size() != 3) break;
            return new S_Dvar((S_Id*)symbols[1], (S_Idl*)symbols[2]);
        
    }
    
    return 0;
}

