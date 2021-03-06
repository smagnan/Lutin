 // ---------------------------------------------
//  automaton.h
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#ifndef AUTOMATON_H
#define AUTOMATON_H


#include <stack>
#include <utility>
#include <deque>
#include "symbol/symbol.h"
#include "lexer.h"
#include "symbol/p.h"

#define RULES_NUMBER 25

extern const unsigned int RULES[RULES_NUMBER];

class State;
class Automaton
{
	private:
		std::stack<Symbol*> symbolStack;
		std::stack<State*> stateStack;
		std::deque<Symbol*> input;
        Symbol* currentSymbol;
	protected:
	public:
	    Automaton(std::deque<Symbol*> input);
	    virtual ~Automaton();
	    Symbol* getDerivationTree();
        void read();
        void transition();
	    void shift(Symbol * symbol, State * state);
	    void reduce(int numRule);
	    void error();
	    void accept();
	    void notifyMissingSymbol(Symbol* symbol);
        Symbol* getSymbol(int numRule, std::deque<Symbol*> & symbols);
};

#endif
