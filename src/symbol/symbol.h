#ifndef SYMBOL_H
#define SYMBOL_H

#include <iostream>
#include <sstream>
#include <string>
#include <queue>
#include <map>

class interpreter;
class instruction;

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

<<<<<<< HEAD
        virtual int eval(Interpreter interpreter) { return SYMB_EVAL_OK;};
=======
        //virtual int eval(std::queue<Instruction*> instructions) {};
>>>>>>> c91889ee5704586f81ea4579ff70ff612ccec4b5

	protected:
		int id;

	private:

};

#endif // SYMBOL_H
