// ---------------------------------------------
//  State39.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE39_H
#define STATE39_H

#include "../automaton.h"

class State39 {
private:
public:
    State39();
    virtual ~State39();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE39_H
