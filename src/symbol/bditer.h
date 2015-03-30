// ---------------------------------------------
//  bditer.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_BDITER_H
#define S_BDITER_H

#include "bd.h"

// Rule include :
#include "bd.h"
#include "d.h"

#include <map>
#include <vector>
#include <stack>
#include <string>
//#include "../debugger.h"

class S_Bditer : public S_Bd
{
private:
protected:
    S_Bd * bd;
    S_D * d;
public:
    S_Bditer();
    S_Bditer(S_Bd* bd, S_D* d);
    virtual void staticAnalysis(std::map< std::string, Variable > & memId);
    virtual ~S_Bditer();
    virtual std::string print() const;
    S_Bd * next() {return bd;};
    S_D * get_declaration() {
    	/*DEBUGERR("get_declaration IN")
    	TRACE(d << std::endl);
    	DEBUGERR("get_declaration OUT")*/
    	return d;
    };
};

#endif // S_BDITER_H
