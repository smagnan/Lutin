// ---------------------------------------------
//  final.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_FINAL_H
#define S_FINAL_H

#include "symbol.h"

class S_Final : public Symbol
{
private:
protected:
    S_Final(Symbols s);
public:
    S_Final();
    virtual ~S_Final();
};

#endif // S_FINAL_H
