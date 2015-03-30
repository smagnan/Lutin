// ---------------------------------------------
//  ini.cpp
//
//  Created  :
//      by   : Pierre GODARD
//
// ---------------------------------------------

#include "ini.h"

S_Ini::S_Ini(S_Id* id, S_Num* num)
    : Symbol(INI), id(id), num(num)
{
}

S_Ini::~S_Ini()
{
    if(!id)
        delete id;
    if(!num)
        delete num;
}

std::string S_Ini::print() const
{
    return id->print() + " = " + num->print();
}

void S_Ini::staticAnalysis(std::map< std::string, Variable > & memId ,std::vector<std::string> &log)
{
    Variable var_info;
    var_info.is_const = true;// This is a const
    var_info.is_declared = true; // Just a declaration
    var_info.is_assigned = true; // A const is always assigned
    var_info.is_used = false;
    
    // If the id is already in the map : double declaration
    if (!(memId.insert( std::pair< std::string, Variable >(id->getValue(),var_info))).second)
    {
        std::cerr << ALREADY_DECLARED << *id << std::endl;
    }
}
