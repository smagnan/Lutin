// ---------------------------------------------
//  et.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_ET_H
#define S_ET_H

#include "e.h"

// Rule include :
#include "t.h"

class S_Et : public S_E
{
private:
protected:
    S_T * t;
public:
    S_Et(S_T* t);
    virtual ~S_Et();
    virtual std::string print() const;
    virtual double eval(Interpreter& interpreter);
};

#endif // S_ET_H
