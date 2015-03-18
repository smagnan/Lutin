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

#include <vector>
#include <iterator>

using namespace std;

// Automaton constructor
Automaton::Automaton(Interpreter *interp,Lexer *lex) 
{
	this->interpreter = interp;
	this->lexer = lex;
	// Stack initialization :
	stateStack.push(new State0());
	rules = new pair<Symbols,int>[RULES_NUMBER];
	rules[0] = make_pair(P,2);
	rules[1] = make_pair(BD,3);
	rules[2] = make_pair(BI,3);
	rules[3] = make_pair(D,3);
	rules[4] = make_pair(IDL,3);
	rules[5] = make_pair(D,3);
	rules[6] = make_pair(INIL,3);
	rules[7] = make_pair(INI,3);
	rules[8] = make_pair(I,2);
	rules[9] = make_pair(I,3);
	rules[10] = make_pair(I,2);
	rules[11] = make_pair(EPRIME,1);
	rules[12] = make_pair(E,3);
	rules[13] = make_pair(E,3);
	rules[14] = make_pair(E,1);
	rules[15] = make_pair(T,3);
	rules[16] = make_pair(T,3);
	rules[17] = make_pair(T,1);
	rules[18] = make_pair(END,3);
	rules[19] = make_pair(END,1);
	rules[20] = make_pair(END,1);
	rules[21] = make_pair(BD,1);
	rules[22] = make_pair(BI,1);
	rules[23] = make_pair(IDL,1);
	rules[24] = make_pair(INIL,1);
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
	std::vector<Symbol> symbols;
	while(this->lexer->hasNext()) {
		symbols = this->lexer->getSymbols();
		for(std::vector<Symbol>::iterator it = symbols.begin(); it != symbols.end(); ++it) {
		    this->stateStack.top()->transition(*this,&*it);
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
    for (int i = 0; i < numRule; i++)
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


