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
#include <vector>
#include "symbol/symbol.h"
#include "interpreter/interpreter.h"
#include "lexer.h"

#define RULES_NUMBER 25

extern const unsigned int RULES[RULES_NUMBER];

class State;
class Automaton
{
	private:
		std::stack<Symbol*> symbolStack;
		std::stack<State*> stateStack;
		std::pair<Symbols,int>* rules;
		Interpreter *interpreter;
		Lexer *lexer;
	protected:
	public:
	    Automaton(Interpreter *interp, Lexer *lex);
	    virtual ~Automaton();
	    void read();
	    void shift(Symbol * symbol, State * state);
	    void reduce(int numRule);
	    void error();
	    void accept();
        Symbol* getSymbol(int numRule, std::vector<Symbol*> & symbols);
};

#endif
