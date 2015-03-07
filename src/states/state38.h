// ---------------------------------------------
//  State38.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE38_H
#define STATE38_H

#include "../automaton.h"

class State38 {
private:
public:
    State38();
    virtual ~State38();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE38_H
