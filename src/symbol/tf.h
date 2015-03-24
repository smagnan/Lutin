// ---------------------------------------------
//  tf.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_TF_H
#define S_TF_H

#include "t.h"

// Rule include :
#include "f.h"

class S_Tf : public S_T
{
private:
protected:
    S_F * f;
public:
    S_Tf(S_F * f);
    virtual ~S_Tf();
    virtual std::string print() const;
};

#endif // S_TF_H
