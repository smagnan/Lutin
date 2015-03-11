// ---------------------------------------------
//  main.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include <iostream>

#include "main.h"
#include "automaton.h"
#include "interpreter/interpreter.h"

using std::cout;
using std::endl;

int main( int argc, const char* argv[] )
{
	// SIDE NOTE: http://stackoverflow.com/questions/107264/how-often-to-commit-changes-to-source-control
	cout << "Creating Interpreter" << endl;
	Interpreter *interpreter 	= new Interpreter();
	cout << "Creating FSM" << endl;
	//Automaton *automaton 		= new Automaton();
	Printer mainPrinter;
	mainPrinter.printerr("Project not finised ","you know what to do ...");
	mainPrinter.printwarn("Project not finised ","you know what to do ...");
	mainPrinter.printinfo("Project not finised ","you know what to do ...");
	//===================================
	cout << "============== DECLARE =================" << endl;
	interpreter->declare("testVar",VAR,42);
	interpreter->declare("testVar2"); // not initialised var
	interpreter->declare("testVar3");
	interpreter->declare("testConst",CONST,777);
	interpreter->keep_value(100);
	// The following line is equivalent to the previous one :) 
	// Note that whatever the string is the name will be the value
	interpreter->declare("",VALUE,100); // XXX does nothing here since the value is already stored
	interpreter->print_declarations();
	cout << "============== UPDATED ================" << endl;
	interpreter->update_variable("testVar",1337);
	interpreter->update_variable("testVar2",8080);
	interpreter->update_variable("testConst",1000); // Not working as you can see, quite normal (:
	interpreter->print_declarations();
	cout << "================ END ==================" << endl;
	//===================================
	cout << "Deleting FSM" << endl;
	//delete automaton;
	cout << "Deleting Interpreter" << endl;
	delete interpreter;

	return 0;
}
