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
#include "interpreter/interpreter.h"

using std::cout;
using std::endl;
using boost::program_options;

int main( int argc, const char* argv[] )
{

	options_description opt("Allowed options");
	desc.add_options()
		("file", value<std::string>(), "Lutin file to use")
    		("print,p", "Display the program on standard output")
    		("analyse,a", "Static analysis of the program")
		("execution,e", "Program execution")
		("optimize,o", "Simplify and transform the program");
	
	positional_options_description file;
	file.add("file",-1);

	variables_map vm;
	store(parse_command_line(argc, argv, opt).options(opt).positional(p).run(),vm);
	po::notify(vm);    

	if (vm.count("print")) 
	{
		// TODO : print the program
		cout << "Hello, I'm printing" << endl;
	}
	
	if (vm.count("analyse")) 
	{
    		// TODO : analyse the program
		cout << "Hello, I'm analysing" << endl;
	} 

	if (vm.count("execution")
	{
		// TODO : execute
		cout << "Hello, I'm executing ... with an axe" << endl;
	}

	if ("optimize")
	{
		// TODO : simplify
		cout << "Hello, I'm optimizing" << endl;
	}
	
	/*
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
	*/
	
	return 0;
}
