import re
import argparse
import sys
import os

templateHeader = """// ---------------------------------------------
//  {class_name}.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef {class_name_upp}_H
#define {class_name_upp}_H

#include <string>
#include "{parent_class_name}.h"

class {class_name_cap} : public {parent_class_name_cap}
{{
private:
protected:
    {class_name_cap}(Symbols s);
public:
    {class_name_cap}();
    virtual ~{class_name_cap}();
}};

#endif // {class_name_upp}_H
"""

templateSource = """// ---------------------------------------------
//  {class_name}.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "{class_name}.h"

{class_name_cap}::{class_name_cap}(Symbols s)
    : {parent_class_name_cap}(s)
{{
}}

{class_name_cap}::{class_name_cap}()
    : {parent_class_name_cap}({identifier})
{{
}}

{class_name_cap}::~{class_name_cap}()
{{
}}
"""

templateHeaderValue = """// ---------------------------------------------
//  {class_name}.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef {class_name_upp}_H
#define {class_name_upp}_H

#include <string>
#include "{parent_class_name}.h"

class {class_name_cap} : public {parent_class_name_cap}
{{
private:
    {valueType} value;
protected:
    {class_name_cap}(Symbols s);
public:
    {class_name_cap}();
    virtual ~{class_name_cap}();
    {valueType} getValue();
    void setValue({valueType} v);
}};

#endif // {class_name_upp}_H
"""

templateSourceValue = """// ---------------------------------------------
//  {class_name}.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "{class_name}.h"

{class_name_cap}::{class_name_cap}(Symbols s)
    : {parent_class_name_cap}(s)
{{
}}

{class_name_cap}::{class_name_cap}()
    : {parent_class_name_cap}({identifier})
{{
}}

{class_name_cap}::~{class_name_cap}()
{{
}}

{valueType} {class_name_cap}::getValue()
{{
    return value;
}}

void {class_name_cap}::setValue({valueType} v)
{{
    value = v;
}}
"""

# Arguments manager
parser = argparse.ArgumentParser(prog="lag", description="LAG (Lutin Automaton Generator) is a tool for the generation of lutin automaton state classes in the current directory (by default)")
parser.add_argument('input_csv_file', help='The input csv file used to generate the symbol classes')
parser.add_argument('-o', dest='output_directory', default='./', help='The input csv file used to generate the state classes')
c = parser.parse_args()

# Initialization
csvFile = open(c.input_csv_file, 'r')
symbols = [line[:-1].split(',') for line in csvFile]

# Generation
print("Generation - Starting...")

os.chdir(c.output_directory)
for i, row in enumerate(symbols[0]):
    class_name = symbols[0][i]
    class_name_cap = "S_" + class_name.capitalize()
    class_name_upp = "S_" + class_name.upper()
    identifier = symbols[1][i].upper()
    parent_class_name = symbols[2][i]
    parent_class_name_cap = "S_" + parent_class_name.capitalize()
    if parent_class_name == "symbol":
        parent_class_name_cap = parent_class_name.capitalize()
    valueType = symbols[3][i]
    
    header = ""
    source = ""
    
    if valueType:
        header = templateHeaderValue.format(class_name=class_name,class_name_cap=class_name_cap,class_name_upp=class_name_upp,parent_class_name=parent_class_name,parent_class_name_cap=parent_class_name_cap,valueType=valueType)
        source = templateSourceValue.format(class_name=class_name,class_name_cap=class_name_cap,parent_class_name_cap=parent_class_name_cap,identifier=identifier,valueType=valueType)
    else:
        header = templateHeader.format(class_name=class_name,class_name_cap=class_name_cap,class_name_upp=class_name_upp,parent_class_name=parent_class_name,parent_class_name_cap=parent_class_name_cap)
        source = templateSource.format(class_name=class_name,class_name_cap=class_name_cap,parent_class_name_cap=parent_class_name_cap,identifier=identifier)
    
    fHeader = open(class_name + '.h', 'w+')
    fSource = open(class_name + '.cpp', 'w+')
    
    fHeader.write(header)
    fSource.write(source)
    
    print(" . . . " + class_name)

print("Generation - Done !")

