// ---------------------------------------------
//  State25.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE25_H
#define STATE25_H

#include "../automaton.h"

class State25 {
private:
public:
    State25();
    virtual ~State25();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE25_H
