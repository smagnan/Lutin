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

using namespace std;

// Automaton constructor
Automaton::Automaton() 
{
	// Stack initialization :
	stateStack.push(new State0());
	rules = new pair<Symbol*,int>[RULES_NUMBER];
	rules[0] = make_pair(new Symbol(PROG),2);
	rules[1] = make_pair(new Symbol(DECBLOCK),3);
	rules[2] = make_pair(new Symbol(INSTBLOCK),3);
	rules[3] = make_pair(new Symbol(DECL),3);
	rules[4] = make_pair(new Symbol(IDENLIST),3);
	rules[5] = make_pair(new Symbol(DECL),3);
	rules[6] = make_pair(new Symbol(INITLIST),3);
	rules[7] = make_pair(new Symbol(INIT),3);
	rules[8] = make_pair(new Symbol(INSTR),2);
	rules[9] = make_pair(new Symbol(INSTR),3);
	rules[10] = make_pair(new Symbol(INSTR),2);
	rules[11] = make_pair(new Symbol(EXPR),1);
	rules[12] = make_pair(new Symbol(EXPRBIN),3);
	rules[13] = make_pair(new Symbol(EXPRBIN),3);
	rules[14] = make_pair(new Symbol(EXPRBIN),1);
	rules[15] = make_pair(new Symbol(TERM),3);
	rules[16] = make_pair(new Symbol(TERM),3);
	rules[17] = make_pair(new Symbol(TERM),1);
	rules[18] = make_pair(new Symbol(FINAL),3);
	rules[19] = make_pair(new Symbol(FINAL),1);
	rules[20] = make_pair(new Symbol(FINAL),1);
	rules[21] = make_pair(new Symbol(DECBLOCK),1);
	rules[22] = make_pair(new Symbol(INSTBLOCK),1);
	rules[23] = make_pair(new Symbol(IDENLIST),1);
	rules[24] = make_pair(new Symbol(INITLIST),1);
}

Automaton::~Automaton()
{
	Symbol* currentSymbol;
	State* currentState;
	
	while(!this->symbolStack.empty())
	{	
		currentSymbol = this->symbolStack.top();
		this->symbolStack.pop();
		delete currentSymbol;
	}
	
	while(!stateStack.empty())
	{		
		currentState = this->stateStack.top();
		this->stateStack.pop();
		delete currentState;
	}
}

void Automaton::read()
{
	//Prends le prochain jeton (voir si l'automate a déjà toute la liste ou pas)
	//Appel la transition de l'état courant (sommet de la pile) avec le symnbole lu
}

void Automaton::shift(Symbol * symbol, State * state)
{
    symbolStack.push(symbol);
    stateStack.push(state);
}

void Automaton::reduce(int numRule)
{
	//Depiler les symboles à droite de la règle
	//Ajouter l'instruction qui va correspond
	//Passer à l'état qui correspond au symbol non terminal
}

void Automaton::error()
{
    
}

void Automaton::accept()
{
    
}


