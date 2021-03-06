import re
import argparse
import sys
import os

templateHeader = """// ---------------------------------------------
//  state{ns}.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE{ns}_H

#define STATE{ns}_H

#include "state.h"

class State{ns} : public State
{{
private:
protected:
public:
    State{ns}();
    virtual ~State{ns}();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
}};

#endif // STATE{ns}_H
"""

templateSource = """// ---------------------------------------------
//  state{ns}.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state{ns}.h"
#include "../symbol/symbol.h"
#include "../automaton.h"

{stateincludes}

State{ns}::State{ns}()
    : State({ns})
{{
}}

State{ns}::~State{ns}()
{{
}}

bool State{ns}::transition(Automaton & automaton, Symbol * s)
{{
    switch(*s)
    {{
{switchcode1}
    }}
    
    return false;
}}

State* State{ns}::getNextState(Symbol * s)
{{
    switch(*s)
    {{
{switchcode2}
        default:
            break;
    }}
    
    return 0;
}}
"""

templateShiftInstruction = """
        case {symbolname}:
            automaton.shift(s, new State{shiftstate}());
            break;
"""

templateReduceInstruction = """
        case {symbolname}:
            automaton.reduce({rulenumber});
            break;
"""

templateAcceptInstruction = """
        case {symbolname}:
            automaton.accept();
            break;
"""

templateErrorInstruction = """
        default:
            automaton.error();
            break;
"""

templateNewStateInstruction = """
        case {symbolname}:
            return new State{newstate}();
"""

templateInclude = """
#include "state{ns}.h" """

def translateToSwitchCase1(str, symbolname):
    m = re.match(r'd(\d+)', str)
    if m:
        return templateShiftInstruction.format(symbolname=symbolname, shiftstate=m.group(1))
    m = re.match(r'r(\d+)', str)
    if m:
        return templateReduceInstruction.format(symbolname=symbolname, rulenumber=m.group(1))
    m = re.match(r'acc', str)
    if m:
        return templateAcceptInstruction.format(symbolname=symbolname);
    return ""

def translateToSwitchCase2(str, symbolname):
    m = re.match('(\d+)', str)
    if m:
        return templateNewStateInstruction.format(symbolname=symbolname, newstate=m.group(1))
    return ""
    
def printStateIncludes(numState):
    includeCode = ""
    for index, cell in enumerate(automaton[numState]):
        m = re.match(r'd(\d+)', cell)
        if m:
            includeCode = includeCode + templateInclude.format(ns=m.group(1))
        m = re.match(r'(\d+)', cell)
        if m:
            includeCode = includeCode + templateInclude.format(ns=m.group(1))
    return includeCode
        
def printStateHeader(numState):
    state = templateHeader.format(ns=numState)
    # print(state)
    return state
        
def printStateSource(numState):
    switchCode1 = "";
    switchCode2 = "";
    includeCode = printStateIncludes(numState);
    terminal = True
    for index, cell in enumerate(automaton[numState]):
            switchCaseElement = translateToSwitchCase1(cell, header[index])
            switchCode1 = switchCode1 + switchCaseElement
            switchCaseElement = translateToSwitchCase2(cell, header[index])
            switchCode2 = switchCode2 + switchCaseElement
    switchCode1 = switchCode1 + templateErrorInstruction
    state = templateSource.format(ns=numState, switchcode1=switchCode1, switchcode2=switchCode2, stateincludes=includeCode)
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
print("Generation - Starting...")
os.chdir(c.output_directory)
for index, row in enumerate(automaton):
    print(" . . . state " + str(index) + "\t  " + " ".join([automaton[index][i] for i, elt in enumerate(automaton[index]) if elt ] ) )
    fHeader = open('state' + str(index) + '.h', 'w+')
    fSource = open('state' + str(index) + '.cpp', 'w+')
    
    fHeader.write(printStateHeader(index))
    fSource.write(printStateSource(index))
print("Generation - Done !")

