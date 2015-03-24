#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <boost/regex.hpp>  // Boost.Regex lib
#include <vector>


typedef std::vector<std::pair<int,std::string> > symbol_vector;


using namespace std;

// Regex patterns
    const char* regex = 
        // Var
        "(^var\\s)|"
        // Const
        "(^const\\s)|"
        // read 
        "(^lire\\s)|"
        // write
        "(^ecrire\\s)|"
        // Plus symbol
        "(\\s?\\+\\s?)|"
        // Minus symbol
        "(\\s?-\\s?)|"
        // Multiply symbol
        "(\\*)|"
        // Divide symbol
        "(/)|"
        // openby left
        "(\\()|"
        // openby right
        "(\\))|"
        // semicolon
       "(\\s?;$)|"
        // Id
        "([a-zA-Z][a-zA-Z0-9_]*)|"
        // vir 
        "(\\s?,\\s?)|"
        // egal
        "(\\s?=\\s?)|"
        // affectation
        "(\\s?:=\\s?)|"
        // num 
        "(-?\\d+(,\\d+)?)";

// Compile regex :
boost::regex expression(regex);
//symbol_map symbols;
symbol_vector symbols;

bool regex_callback(const boost::match_results<std::string::const_iterator>& what)
{
    // loop on all symbols 
    for(int i = 1; i <= 16; i++)
    {
        if (what.position(i) != -1) // symbol matched ? 
        {
            symbols.push_back(make_pair(i, what[i].str()));
            //cout << "Pattern n° " << i << " matched. Value : " << what[i] << endl;
        }
    }
    return true;   
}



// ### TEST MAIN ###
int main(int argc, const char* argv[]) {

    std::string text;
    do{
        if(argc == 1)
        {
            std::cout << "Enter text to split (or \"quit\" to exit): ";
            getline(std::cin, text);
            if(text == "quit") break;
        }
        else
            text = "const test := 67;"; 
        
        boost::sregex_iterator m1(text.begin(), text.end(), expression);
        boost::sregex_iterator m2;
//      std::for_each(m1, m2, &regex_callback); 
        while(m1 != m2)
        {
            regex_callback(*m1);
            ++m1;
        }
        for(symbol_vector::iterator i = symbols.begin(); i != symbols.end(); i++)
        {
            cout << (*i).second << endl;
        }
        cout << symbols.size() << " matches found" << endl;
   } while (argc == 1);
    return 0;
}


