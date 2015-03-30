// ---------------------------------------------
//  t.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_T_H
#define S_T_H

#include "e.h"

class S_T : public S_E
{
private:
protected:
    S_T(Symbols s);
public:
    S_T();
    virtual ~S_T();
    virtual std::string print() const;
    virtual void optimize(bool& is_opt, double& value);
};

#endif // S_T_H
