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
#include "symbol/symbol.h"
#include "interpreter/interpreter.h"
#include "lexer.h"

#define RULES_NUMBER 25

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
	    void read(); //utilisera Lexer pour faire le café
	    void shift(Symbol * symbol, State * state);
	    void reduce(int numRule);
	    void error();
	    void accept();
};

#endif
