
#include <boost/regex.hpp>
#include <string>
#include <iostream>

int main()
{

    /*
    // All regexes are compiled in constructors
    boost::regex expr1(
        "(vars\s)|(const\s)|(lire\s)|(ecrire\s)|(+)|(-)|(*)|(/)|(\()|(\))|(;)|([a-zA-Z_][a-zA-Z0-9_]*)|(,)|(=)|(:=)|(-?[0-9]+(,[0-9]+)?");

    const char* str = "var bonbon := 3";

    if (boost::regex_match(str,expr1))
    {
        std::cout << what[0] << std::endl;
    }
    */


        boost::regex re("(ftp|http|https):\/\/(\w+\.)*(\w*)\/([\w\d]+\/{0,1})+");
    std::string url = "ftp://downloads.foo.com/apps/linux/patch.gz";
    try
    {
        if (!boost::regex_match(url, re))
        {
            throw "Your URL is not formatted correctly!";
        }
    }
    catch (boost::regex_error& e)
    {
        std::cerr << "The regexp " << re << " is invalid!" << std::endl;
        throw(e);
    }

    if (boost::regex_match(url, re))
    {
        std::cout << re << " matches " << url << std::endl;
    }
    
    return 0;
}
