// ---------------------------------------------
//  et.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_ET_H
#define S_ET_H

#include <string>
#include "e.h"

class S_Et : public S_E
{
private:
protected:
    S_E * e;
public:
    S_Et(S_E* e);
    virtual ~S_Et();
};

#endif // S_ET_H
