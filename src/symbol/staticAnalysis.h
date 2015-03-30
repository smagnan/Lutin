#ifndef STATIC_ANALYSIS_H
#define STATIC_ANALYSIS_H

#include <string>

const std::string ALREADY_DECLARED = "Variable already declared : ";
const std::string NOT_ASSIGNED = "Variable not assigned : ";
const std::string NOT_DECLARED = "Variable not declared : ";
const std::string NOT_USED = "Variable not used : ";
const std::string CONST_AFFECT = "Tried to reassign constant : ";

#endif // STATIC_ANALYSIS_H
