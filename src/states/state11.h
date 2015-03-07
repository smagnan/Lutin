// ---------------------------------------------
//  State11.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE11_H
#define STATE11_H

#include "../automaton.h"

class State11 {
private:
public:
    State11();
    virtual ~State11();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE11_H
