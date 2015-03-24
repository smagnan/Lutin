#ifndef SYMBOL_H
#define SYMBOL_H

#include <iostream>
#include <sstream>
#include <string>

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
        
        virtual std::string print();

        virtual int eval();

	protected:
		int id;

	private:

};

#endif // SYMBOL_H
