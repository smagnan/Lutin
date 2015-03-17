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

using std::cout;
using std::endl;

namespace po =  boost::program_options;

//// Main function :

int main( int argc, const char* argv[] )
{
    
    
	Printer mainPrinter;
	// SIDE NOTE: http://stackoverflow.com/questions/107264/how-often-to-commit-changes-to-source-control
	mainPrinter.printinfo("","Creating Interpreter");
	Interpreter *interpreter 	= new Interpreter();
	mainPrinter.printinfo("","Creating FSM");
	//Automaton *automaton 		= new Automaton();
	mainPrinter.printerr("Project not finised ","you know what to do ...");
	mainPrinter.printwarn("Project not finised ","you know what to do ...");	
	//===================================
	mainPrinter.print("","============== DECLARE =================");
	interpreter->declare("testVar",VAR,42);
	interpreter->declare("testVar2"); // not initialised var
	interpreter->declare("testVar3");
	interpreter->declare("testConst",CONST,777);
	interpreter->keep_value(100);
	// The following line is equivalent to the previous one :) 
	// Note that whatever the string is the name will be the value
	interpreter->declare("",VALUE,100); // XXX does nothing here since the value is already stored
	interpreter->print_declarations();
	mainPrinter.print("","============== UPDATED ================");
	interpreter->update_variable("testVar",1337);
	interpreter->update_variable("testVar2",8080);
	interpreter->update_variable("testConst",1000); // Not working as you can see, quite normal (:
	interpreter->print_declarations();
	mainPrinter.print("","================ END ==================");
	//===================================
	mainPrinter.printinfo("","Deleting FSM");
	//delete automaton;
	mainPrinter.printinfo("","Deleting Interpreter");
	delete interpreter;
	
    
    cout << endl << endl;
    
    
    
    ArgsManager am(argc, argv);
    
    if (am.isError())
    {
        cout << am << endl;
        return EXIT_FAILURE;
    }
    
    if (am.count("help"))
    {
        cout << am << endl;
        return EXIT_SUCCESS;
    }
	
	if (am.count("analyze")) 
	{
        //TODO: ANALYZE 
        // Fill with that kind of line :
        // interpreter.static_analysis();
        cout << "analyze" << endl;
	}

	if (am.count("optimize"))
	{
        //TODO: OPTIMIZE 
        // Fill with that kind of line :
        // interpreter.optimize();
        cout << "optimize" << endl;
	}
    
	if (am.count("print")) 
	{
        //TODO: PRINT 
        // Fill with that kind of line :
        // cout << interpreter << endl;
        cout << "print" << endl;
	}
    
	if (am.count("execute"))
	{
        //TODO: OPTIMIZE 
        // Fill with that kind of line :
        // interpreter.execute();
        cout << "execute" << endl;
	}
    
    // Get the input file content
    cout << "Input file content : " << endl << endl;
    cout << am.getInputText();
	
	return EXIT_SUCCESS;
}
