// ---------------------------------------------
//  main.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
#include <deque>
#include <boost/program_options.hpp>
#include <map>
#include <vector>

#include "automaton.h"
#include "argsmanager.h"
#include "interpreter/interpreter.h"
#include "loader.h"
#include "debugger.h"
#include "symbol/symbol.h"

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::map;
using std::vector;
using std::iterator;

namespace po =  boost::program_options;

//// Main function :

int main( int argc, const char* argv[] )
{
	std::ifstream t("../datas/logo.ascii");
	std::stringstream buffer;
	buffer << t.rdbuf();

	cout << buffer.str() << endl;

	ArgsManager am(argc, argv);

    if (am.isError())
    {
        cout << am << endl;
        return EXIT_FAILURE;
    }

    Loader* loader 				= new Loader(am.getFilePath().c_str()); 
    Lexer* lexer 				= new Lexer();
    if (!lexer->setProg(loader->string()))
    {
        return EXIT_FAILURE;
    }

	Automaton* automaton 		= new Automaton(lexer->getDeque());
    Symbol* derivationTree 		= automaton->getDerivationTree();
	Interpreter* interpreter 	= new Interpreter(derivationTree);

    if (am.count("help"))
    {
        cout << am << endl;
        return EXIT_SUCCESS;
    }

	if (am.count("analyze"))
	{
        map<string , Variable> variableMemory;
        vector<string> log;
        string currentLogLine;
        derivationTree->staticAnalysis(variableMemory,log);
        for(vector<string> :: iterator iCurrentLine = log.begin();iCurrentLine != log.end() ; iCurrentLine++)
        {
            cerr<<*iCurrentLine<<endl;
        }

        for(map<string, Variable>::iterator iVariable = variableMemory.begin();iVariable != variableMemory.end();iVariable++)
        {
            if(!((iVariable->second).is_used))
            {
                cerr<<"Variable "<<iVariable->first<<" is never used"<<endl;
            }
        }
	}

	if (am.count("optimize"))
	{
        derivationTree->optimize();
	}

	if (am.count("print"))
	{
        std::cout << *derivationTree << std::endl; 
	}

	if (am.count("execute"))
	{
        interpreter->load_declarations();
        interpreter->load_instructions();
        interpreter->run();
	}

    delete automaton;
	delete interpreter;
	delete lexer;
	delete loader;

	return EXIT_SUCCESS;
}
