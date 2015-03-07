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
	Automaton *automaton 		= new Automaton();
	//===================================
	interpreter->declare("testVar",VAR,42);
	interpreter->update_variable("testVar",1337);
	//===================================
	cout << "Deleting FSM" << endl;
	delete automaton;
	cout << "Deleting Interpreter" << endl;
	delete interpreter;

	return 0;
}
