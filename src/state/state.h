#ifndef STATE_H
#define STATE_H

#include <string>

class Automaton;
class Symbol;


class State
{
	public:
		State();
		virtual ~State();
		virtual bool transition(Automaton &automaton, Symbol * s) = 0;
        virtual State* getNextState(Symbol * s) = 0;
        int getId() const;
		operator int() const;
        
	protected:
        State(int i);
        
        const int id;
        
    private:
};

#endif // STATE_H
