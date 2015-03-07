import re
import argparse
import sys
import os

templateHeader = """// ---------------------------------------------
//  State{ns}.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE{ns}_H
#define STATE{ns}_H

#include "../automaton.h"

class State{ns} {{
private:
public:
    State{ns}();
    virtual ~State{ns}();
    bool transition(Automaton & automaton, Symbol * s);
}}

#endif // STATE{ns}_H
"""

templateSource = """// ---------------------------------------------
//  State{ns}.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State{ns}.h"

State{ns}::State{ns}()
    : State("State{ns}")
{{
}}

State{ns}::~State{ns}()
{{
}}

bool State{ns}::transition(Automaton & automaton, Symbol * s)
{{
    switch(*s)
    {{
{switchcode}
    }}
}}
"""

templateShiftInstruction = """
        case {symbolname}:
            automaton.shift(s, new S{shiftstate});
            break;
"""

def translateToSwitchCase(str, symbolname):
    m = re.match(r'd(\d+)', str)
    if m:
        return templateShiftInstruction.format(symbolname=symbolname, shiftstate=m.group(1))
    return ""
        
def printStateHeader(numState):
    state = templateHeader.format(ns=numState)
    # print(state)
    return state
        
def printStateSource(numState):
    switchCode = "";
    for index, cell in enumerate(automaton[numState]):
        switchCaseElement = translateToSwitchCase(cell, header[index])
        switchCode = switchCode + switchCaseElement
    state = templateSource.format(ns=numState, switchcode=switchCode)
    # print(state)
    return state

# Arguments manager
parser = argparse.ArgumentParser(prog="lag", description="LAG (Lutin Automaton Generator) is a tool for the generation of lutin automaton state classes in the current directory (by default)")
parser.add_argument('input_csv_file', help='The input csv file used to generate the state classes')
parser.add_argument('-o', dest='output_directory', default='./', help='The input csv file used to generate the state classes')
c = parser.parse_args()

# Initialization
csvFile = open(c.input_csv_file, 'r')
automaton = [line[:-1].split(',') for line in csvFile]
header = automaton.pop(0);

# Generation
print("Generation - Stating...")
os.chdir(c.output_directory)
for index, row in enumerate(automaton):
    print(" . . . state " + str(index) + "\t  " + " ".join([automaton[index][i] for i, elt in enumerate(automaton[index]) if elt ] ) )
    fHeader = open('state' + str(index) + '.h', 'w+')
    fSource = open('state' + str(index) + '.cpp', 'w+')
    
    fHeader.write(printStateHeader(index))
    fSource.write(printStateSource(index))
print("Generation - Done !")

