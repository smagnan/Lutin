
#include <boost/regex.hpp>
#include <string>
#include <iostream>

int main()
{
    // All regexes are compiled in constructors
    boost::regex expr1(
        "(vars[[:space:]])|"
        "(const[[:space:]])|"
        "(lire[[:space:]])|"
        "(ecrire[[:space:]])|"
        "(+)|"
        "(-)|"
        "(*)|"
        "(/)|"
        "(()|"
        "())|"
        "(;)|"
        "([a-zA-Z_][a-zA-Z0-9_]*)" 
        "(,)|"
        "(=)|"
        "(:=)|" 
        "(-?[0-9]+(,[0-9]+)?");

    const char* str = "var bonbon := 3";
    boost::cmatch what;

    if (boost::regex_match(str, what, expr1))
    {
        std::cout << what[0] << std::endl;
    }
    
    return 0;
}
