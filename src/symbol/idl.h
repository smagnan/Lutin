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
#include "id.h"

class S_Idl : public Symbol
{
private:
protected:
public:
    S_Idl();
    virtual ~S_Idl();
    virtual std::string print() const;
	virtual void staticAnalysis(std::map< std::string, Variable > & memId, std::vector<std::string> &log);
	virtual S_Idl* get_idl(){return NULL;};
	virtual S_Id* get_id(){return NULL;};
};

#endif // S_IDL_H
