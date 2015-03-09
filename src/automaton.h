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

class Symbol;
class State;
class Automaton
{
private:
protected:
public:
    Automaton();
    virtual ~Automaton();
    void shift(Symbol * symbol, State * state);
};

#endif
