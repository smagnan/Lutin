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

class Symbol;
class State;
class Automaton
{
private:
	std::stack<Symbol*> symbolStack;
	std::stack<State*> stateStack;
protected:
public:
    Automaton();
    virtual ~Automaton();
    void read(); //utilisera Lexer pour faire le café
    void shift(Symbol * symbol, State * state);
    void reduce(int numeroRegle);
    void error();
    void accept();
};

#endif
