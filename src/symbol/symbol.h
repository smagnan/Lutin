#ifndef SYMBOL_H
#define SYMBOL_H

#include <iostream>
#include <sstream>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include <stack>  

// #include "../interpreter/interpreter.h"
// #include "../interpreter/instruction.h"

class Interpreter;
class Instruction;

#define UNUSED(expr) do { (void)(expr); } while (0)

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
        
        friend std::ostream& operator<< (std::ostream& out, const Symbol& symbol);

        //virtual int eval(Interpreter interpreter) { return SYMB_EVAL_OK;};
        virtual int eval(std::queue<Instruction*> instructions) {};

		virtual void staticAnalysis(map< std::string,vector<boolean> > & memId , stack<string> &log) {};
		
	protected:
		int id;

	private:

};

#endif // SYMBOL_H
