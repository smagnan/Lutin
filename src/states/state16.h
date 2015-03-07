// ---------------------------------------------
//  State16.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE16_H
#define STATE16_H

#include "../automaton.h"

class State16 {
private:
public:
    State16();
    virtual ~State16();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE16_H
