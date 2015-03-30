// ---------------------------------------------
//  iniliter.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_INILITER_H
#define S_INILITER_H

#include "inil.h"

// Rule include :
#include "ini.h"

class S_Iniliter : public S_Inil
{
private:
protected:
    S_Inil * inil;
    S_Ini * ini;
public:
    S_Iniliter(S_Inil* inil, S_Ini* ini);
    virtual ~S_Iniliter();
    virtual std::string print() const;
	virtual void staticAnalysis(std::map< std::string, Variable > & memId);
	S_Inil* get_inil(){return inil;};
	S_Ini* get_ini(){return ini;};
};

#endif // S_INILITER_H
