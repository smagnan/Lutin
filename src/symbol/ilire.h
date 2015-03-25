// ---------------------------------------------
//  ilire.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_ILIRE_H
#define S_ILIRE_H

#include "i.h"

// Rule include :
#include "id.h"

class S_Ilire : public S_I
{
private:
protected:
    S_Id * id;
public:
    S_Ilire(S_Id* id);
    virtual ~S_Ilire();
    virtual std::string print() const;
    S_Id * get_id() { return id;};
};

#endif // S_ILIRE_H
