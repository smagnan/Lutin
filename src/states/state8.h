// ---------------------------------------------
//  State8.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE8_H
#define STATE8_H

#include "../automaton.h"

class State8 {
private:
public:
    State8();
    virtual ~State8();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE8_H
