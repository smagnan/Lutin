// ---------------------------------------------
//  state35.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE35_H
#define STATE35_H

#include "state.h"

class State35 : public State
{
private:
protected:
public:
    State35();
    virtual ~State35();
    bool transition(Automaton & automaton, Symbol * s);
};

#endif // STATE35_H
