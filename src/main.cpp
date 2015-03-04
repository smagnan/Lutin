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
	printf( "\nCreating Interpreter" );
	Interpreter *interpreter 	= new Interpreter();
	printf( "\nCreating FSM" );
	Automaton *automaton 		= new Automaton();

	return 0;
}