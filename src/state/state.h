#ifndef STATE_H
#define STATE_H

#include <string>

class Automaton;
class Symbol;


class State
{
	public:
		State(std::string name);
		virtual ~State();
		void print() const;
		virtual bool transition(Automaton &automaton, Symbol * s) = 0;
	protected:
		std::string name;
};

#endif // STATE_H
