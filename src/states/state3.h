// ---------------------------------------------
//  State3.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE3_H
#define STATE3_H

#include "../automaton.h"

class State3 {
private:
public:
    State3();
    virtual ~State3();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE3_H
