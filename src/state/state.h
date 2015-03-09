#ifndef STATE_H
#define STATE_H

class Automaton;
class Symbol;

#include <string>

enum Symbols
{
    PLUS,
    MINUS,
    MULT,
    DIVIDE,
    OPENBY,
    CLOSEBY,
    ID,
    NUM,
    VAR,
    CONST,
    PV,
    VIR,
    EQ,
    WRITE,
    READ,
    AFF,
    END
};

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
