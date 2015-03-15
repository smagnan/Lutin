#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <boost/regex.hpp>  // Boost.Regex lib

typedef std::map<std::string, std::string::difference_type, std::less<std::string> > map_type;

using namespace std;

// regex
const char* re =
    // main address field (letters only)
    "(\\w+)"
    // '@'
    "@+"
    // domain name 1 (letters only)
    "(\\w+)"
    // '.'
    "\\."
    // domaine name 2 (com, fr, net or any 1 to 3 character word)
    "(com|fr|net|a{0-3})";

boost::regex expression(re);
map_type field_map;

bool regex_callback(const boost::match_results<std::string::const_iterator>& what)
{
    // what[0] contains the whole string
    // what[1] -> "main adress field"
    // what[2] -> "@"
    // what[3] -> "domain name 1"
    // what[4] -> "."
    // what[5]
    // add class name and position to map:
    field_map[what[1].str()] = what.position(1);
    field_map[what[2].str()] = what.position(2);
    field_map[what[3].str()] = what.position(3);
    return true;
}


int main() {

    std::string text = "coucou@gmail.aa";
    boost::sregex_iterator m1(text.begin(), text.end(), expression);
    boost::sregex_iterator m2;
    std::for_each(m1, m2, &regex_callback);  // trouver de la doc sur cette ligne.. 
    cout << field_map.size() << " matches found" << endl;

    // affichage des résultats de la recherche
    map_type::iterator c,d;
    c = field_map.begin();
    d = field_map.end();
    while(c != d)
    {
        cout << "Field : \"" << (*c).first << "\" found at index: " << (*c).second << endl;
        ++c;
    }
    field_map.erase(field_map.begin(), field_map.end());

    return 0;
}


