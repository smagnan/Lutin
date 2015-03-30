// ---------------------------------------------
//  iaff.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_IAFF_H
#define S_IAFF_H

#include "i.h"

// Rule include :
#include "id.h"
#include "eprime.h"

class S_Iaff : public S_I
{
private:
protected:
    S_Id * id;
    S_Eprime * eprime;
public:
    S_Iaff(S_Id* id, S_Eprime* eprime);
    virtual ~S_Iaff();
    virtual std::string print() const;
    virtual void optimize();
    virtual void staticAnalysis(std::map< std::string, Variable > & memId, std::vector<std::string> &log);
    S_Eprime * expression() { return eprime;};
    S_Id * get_id() { return id;};
};

#endif // S_IID_H
