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
#include "exception/automatonException.h"
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
//	std::ifstream t("../datas/logo.ascii");
	std::stringstream buffer;
//	buffer << t.rdbuf();

//	cout << buffer.str() << endl;

	ArgsManager am(argc, argv);

    if (am.isError())
    {
        return EXIT_FAILURE;
    }

    Loader* loader 				= new Loader(am.getFilePath().c_str());
    Lexer* lexer 				= new Lexer();
    if (!lexer->setProg(loader->string()))
    {
        return EXIT_FAILURE;
    }

	Automaton* automaton;
    Symbol* derivationTree;

    try
    {
        automaton       = new Automaton(lexer->getDeque());
        derivationTree 	= automaton->getDerivationTree();
    } catch ( AutomatonException a ) {
        std::cerr << a.what() << std::endl;    
        return EXIT_FAILURE;
    }
    

	Interpreter* interpreter 	= new Interpreter(derivationTree);

    if (am.count("help"))
    {
        cout << am << endl;
        return EXIT_SUCCESS;
    }

	if (am.count("analyze"))
	{
        map<string , Variable> variableMemory;
        derivationTree->staticAnalysis(variableMemory);
	}

	if (am.count("optimize"))
	{
        derivationTree->optimize();
	}

	if (am.count("print"))
	{
	    std::cout<<"PRINTING PROGRAM :"<<endl;
        std::cout << *derivationTree << std::endl;
	}

	if (am.count("execute"))
	{
	    std::cout<<"EXECUTING PROGRAM :"<<endl;
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
