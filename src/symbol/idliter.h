// ---------------------------------------------
//  idliter.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_IDLITER_H
#define S_IDLITER_H

#include "idl.h"
#include "id.h"

class S_Idliter : public S_Idl
{
private:
protected:
    S_Idl * idl;
    S_Id * id;
public:
    S_Idliter(S_Idl* idl, S_Id* id);
    virtual ~S_Idliter();
    virtual std::string print() const;
	virtual void staticAnalysis(std::map< std::string, Variable > & memId, std::stack<std::string> &log);
	S_Idl* get_idl(){return idl;};
	S_Id* get_id(){return id;};
};

#endif // S_IDLITER_H
