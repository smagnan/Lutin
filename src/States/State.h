#include "../automaton.h"
#include "../symbol/symbol.h"

class State
{
	public:
		State(std::string name);
		virtual ~State();
		void print() const;
		virtual bool transition(Automaton & automaton, Symbol * s)=0;
	protected:
		std::string name;
}
