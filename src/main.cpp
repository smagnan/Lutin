// ---------------------------------------------
//  main.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include <stdio.h>

#include "automaton.h"
#include "interpreter/interpreter.h"

int main( int argc, const char* argv[] )
{
	printf( "Creating Interpreter\n" );
	Interpreter *interpreter 	= new Interpreter();
	printf( "Creating FSM\n" );
	Automaton *automaton 		= new Automaton();

	return 0;
}
