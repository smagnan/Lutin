// ---------------------------------------------
//  State43.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE43_H
#define STATE43_H

#include "../automaton.h"

class State43 {
private:
public:
    State43();
    virtual ~State43();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE43_H
