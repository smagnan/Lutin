// ---------------------------------------------
//  tmult.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_TMULT_H
#define S_TMULT_H

#include <string>
#include "tbin.h"

class S_Tmult : public S_Tbin
{
private:
protected:
public:
    S_Tmult(S_T* t, S_F* f);
    virtual ~S_Tmult();
    virtual std::string print();
};

#endif // S_TMULT_H
