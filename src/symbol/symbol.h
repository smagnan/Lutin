#ifndef SYMBOL_H
#define SYMBOL_H

#include <iostream>
#include <sstream>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include <stack>  

#include "staticAnalysis.h"
#include "../exception/mathException.h"

class Interpreter;

struct Variable
{
    bool is_const; // A constant cannot be assigned
    bool is_declared; // If it is in the map, it is declared...
    bool is_assigned;
    bool is_used; // A variable can be used in read/write/aff statements
};

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
    END,
    P,
    BD,
    BI,
    D,
    I,
    IDL,
    INI,
    INIL,
    E,
    EPRIME,
    T,
    F,
    SYMBOL,
    NB_SYMBOLS
};

const int SYMB_EVAL_OK =        0;
const int SYMB_EVAL_FAILED =    -1;

// DEBUG :
extern const char* SYM[NB_SYMBOLS];

class Symbol
{

	public:
		Symbol();

		Symbol(int i);

		virtual ~Symbol();

		operator int() const;
        
        virtual std::string print() const;
        
        virtual Symbol* optimize();
        
        friend std::ostream& operator<< (std::ostream& out, const Symbol& symbol);

        virtual double eval(Interpreter& interpreter);

		virtual void staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log);
		
	protected:
		int id;

	private:

};

#endif // SYMBOL_H
