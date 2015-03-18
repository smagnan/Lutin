#ifndef SYMBOL_H
#define SYMBOL_H

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
    T
};

class Symbol
{

	public:

		//Default Constructor
		Symbol(int id);

		//Deconstructor
		virtual ~Symbol();

		void print();

		// overload int() to cast symbol into integer
		operator int() const;

	protected:
		int ident;

	private:

		//Disable the following by Symbol 

};

#endif // SYMBOL_H
