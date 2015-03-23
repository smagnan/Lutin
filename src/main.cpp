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

#include <boost/program_options.hpp>

#include "automaton.h"
#include "argsmanager.h"
#include "interpreter/interpreter.h"
#include "loader.h"
#include "debugger.h"
#include "symbol/symbol.h"

using std::cout;
using std::endl;

namespace po =  boost::program_options;

//// Main function :

int main( int argc, const char* argv[] )
{

	Printer mainPrinter;
	mainPrinter.printerr("Error example ","more error text");
	mainPrinter.printwarn("Warning example ","more warning text");
	mainPrinter.printinfo("Information example ","more info text");
	ArgsManager am(argc, argv);
    
    if (am.isError())
    {
        cout << am << endl;
        return EXIT_FAILURE;
    }

    DEBUGINFO("Creating Loader");
    Loader* loader 				= new Loader(am.getFilePath().c_str()); // TODO not really clean ...
	// SIDE NOTE: http://stackoverflow.com/questions/107264/how-often-to-commit-changes-to-source-control
	DEBUGINFO("Creating Lexer");
    Lexer* lexer 				= new Lexer();
    lexer->setProg(loader->string());
	DEBUGINFO("Creating Interpreter");
	Interpreter* interpreter 	= new Interpreter();
	DEBUGINFO("Creating FSM");
	Automaton* automaton 		= new Automaton(lexer);	
    DEBUGINFO("Get the derivation tree");
    Symbol* derivationTree = automaton->getDerivationTree();
    
	//=================================== TEST STUFF ==========================================
	DEBUGINFO("============== DECLARE ================");
	interpreter->declare("testVar",D_VAR,42);
	interpreter->declare("testVar2"); // not initialised var
	interpreter->declare("testVar3");
	interpreter->declare("testConst",D_CONST,777);
	interpreter->keep_value(100);
	// The following line is equivalent to the previous one :) 
	// Note that whatever the string is the name will be the value
	interpreter->declare("",D_VALUE,100); // XXX does nothing here since the value is already stored
	DEBUGINFO("=============== UPDATE ================");
	interpreter->update_variable("testVar",1337);
	interpreter->update_variable("testVar2",8080);
	interpreter->update_variable("testConst",1000); // Not working as you can see, quite normal (:
	DEBUGINFO("================ END ==================");
	//=================================== END TEST STUFF ======================================


    if (am.count("help"))
    {
        cout << am << endl;
        return EXIT_SUCCESS;
    }
	
	if (am.count("analyze")) 
	{
        // TODO: ANALYZE 
        // Fill with that kind of line :
        // derivationTree.static_analysis();
        cout << "analyze" << endl;
	}

	if (am.count("optimize"))
	{
        // TODO: OPTIMIZE 
        // Fill with that kind of line :
        // derivationTree.optimize();
        cout << "optimize" << endl;
	}
    
	if (am.count("print")) 
	{
        // TODO: PRINT 
        // Fill with that kind of line :
        // cout << interpreter << endl;
        mainPrinter.print(cout,loader->string());
		interpreter->print_declarations(cout);
		interpreter->print_instructions(cout);
        //cout << "print" << endl;
	}
    
	if (am.count("execute"))
	{
        // TODO: OPTIMIZE 
        // Fill with that kind of line :
        // interpreter.execute();
        cout << "execute" << endl;
	}

    DEBUGINFO("Deleting FSM");
    delete automaton;
	DEBUGINFO("Deleting Interpreter");
	delete interpreter;
	DEBUGINFO("Deleting Lexer");
	delete lexer;
	DEBUGINFO("Deleting Loader");
	delete loader;
	
	return EXIT_SUCCESS;
}
