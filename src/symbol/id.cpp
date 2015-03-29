// ---------------------------------------------
//  id.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "id.h"
#include "../interpreter/interpreter.h"

S_Id::S_Id()
    : S_F(ID), value(0)
{
}

S_Id::S_Id(std::string v)
    : S_F(ID), value(v)
{
}

S_Id::~S_Id()
{
}

std::string S_Id::getValue()
{
    return value;
}

void S_Id::setValue(std::string v)
{
    value = v;
}

std::string S_Id::print() const
{
    return value;
}

double S_Id::eval(Interpreter& interpreter)
{
    return interpreter.get_value(value);
}

double S_Id::eval()
{
    throw MathException(CANNOT_EVALUATE_ERROR);
}
