// ---------------------------------------------
//  State26.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE26_H
#define STATE26_H

#include "../automaton.h"

class State26 {
private:
public:
    State26();
    virtual ~State26();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE26_H
