// ---------------------------------------------
//  idl.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_IDL_H
#define S_IDL_H

#include "symbol.h"

class S_Idl : public Symbol
{
private:
protected:
public:
    S_Idl();
    virtual ~S_Idl();
    virtual std::string print() const;
	virtual void staticAnalysis(std::map< std::string, Variable > & memId, std::stack<std::string> &log);
};

#endif // S_IDL_H
