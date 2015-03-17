#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <boost/regex.hpp>  // Boost.Regex lib
#include <vector>

// typedef std::map<std::string, std::string::difference_type, std::less<std::string> > map_type;

// Key : symbol found
// Value : vector of pairs, with pair.first : position of occurence in analyzed text and pair.second : length of pattern found
// Number of occurences found : vector.size()
typedef std::map<std::string, std::vector<std::pair<int, int> > > symbol_map;

using namespace std;

// Regex patterns
    const char* regex = 
        // Var
        "(var\\s)|"
        // Const
        "(const\\s)|"
        // read 
        "(lire\\s)|"
        // write
        "(ecrire\\s)|"
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
        "(\\s?;)|"
        // Id
        "([a-zA-Z_][a-zA-Z0-9_]*)|"
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
//map_type field_map;
symbol_map symbols;

bool regex_callback(const boost::match_results<std::string::const_iterator>& what)
{
    // loop on all symbols 
    for(int i = 1; i <= 16; i++)
    {
        if (what.position(i) != -1)   // symbol matched ?
        {  
            symbols[what[i].str()].push_back(make_pair(what.position(i), what.length(i))); 
        }
    }
    return true;   
}

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
        std::for_each(m1, m2, &regex_callback); 
        cout << symbols.size() << " matches found" << endl;

        // Printing search results :
        symbol_map::iterator c,d;               // map iterator
        c = symbols.begin();
        d = symbols.end();
        std::vector<std::pair<int, int> >::iterator e,f;         // vector iterator
        int occ;                                // nb of occurences for each found symbol 
        while(c != d)
        {
            cout << endl << "Symbol : " << (*c).first << " : " << endl;
            e = (*c).second.begin();
            f = (*c).second.end();
            occ = 1;
            while(e != f)
            {
                cout << "N° :" << occ << ". Position :" << (*e).first << "; Size : " << (*e).second << "." << endl; 
                ++e;
                ++occ;
            }
            ++c;
        }
        symbols.erase(symbols.begin(), symbols.end());
    } while (argc == 1);
    return 0;
}


