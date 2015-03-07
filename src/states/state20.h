// ---------------------------------------------
//  State20.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE20_H
#define STATE20_H

#include "../automaton.h"

class State20 {
private:
public:
    State20();
    virtual ~State20();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE20_H
