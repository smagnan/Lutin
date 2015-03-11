// ---------------------------------------------
//  automaton.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include "automaton.h"

// Automaton constructor
Automaton::Automaton() 
{
}

Automaton::~Automaton()
{
	Symbol* currentSymbol;
	State* currentState;
	
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
	//Appel la transition de l'état courant (sommet de la pile) avec le symnbole lu
}

void Automaton::shift(Symbol * symbol, State * state)
{
    symbolStack.push(symbol);
    stateStack.push(state);
}

void Automaton::reduce(int numeroRegle)
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


