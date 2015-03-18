BINDIR=bin
OBJDIR=obj

BINNAME=lut
BIN=$(BINDIR)/$(BINNAME)
CLEAN=clean

DIR="./"

GPP=g++
CFLAGS=-Wall -Wextra -Wmissing-braces -pedantic -Wunused
INCLUDE=-I"/usr/include/boost" -I"./" -I"./interpreter/" -I"./symbol/" -I"./state/" -I"./exception/"

INTERPDIR=interpreter
SYMBOLDIR=symbol

MAINFILE=main.cpp automaton.cpp argsmanager.cpp utils.cpp loader.cpp lexer.cpp 
CPPFILES_EXCEPTION=exception/operationException.cpp exception/syntaxException.cpp
CPPFILES_STATE=state/state.cpp state/state0.cpp state/state1.cpp \
	state/state2.cpp state/state3.cpp state/state4.cpp state/state5.cpp \
	state/state6.cpp state/state7.cpp state/state8.cpp state/state9.cpp \
	state/state10.cpp state/state11.cpp state/state12.cpp state/state13.cpp \
	state/state14.cpp state/state15.cpp state/state16.cpp state/state17.cpp \
	state/state18.cpp state/state19.cpp state/state20.cpp state/state21.cpp \
	state/state22.cpp state/state23.cpp state/state24.cpp state/state25.cpp \
	state/state26.cpp state/state27.cpp state/state28.cpp state/state29.cpp \
	state/state30.cpp state/state31.cpp state/state32.cpp state/state33.cpp \
	state/state34.cpp state/state35.cpp state/state36.cpp state/state37.cpp \
	state/state38.cpp state/state39.cpp state/state40.cpp state/state41.cpp \
	state/state42.cpp state/state43.cpp
CPPFILES_SYMBOL=symbol/aff.cpp symbol/bi.cpp symbol/closeby.cpp symbol/const.cpp \
	symbol/decblock.cpp symbol/decl.cpp symbol/divide.cpp symbol/ebin.cpp \
	symbol/e.cpp symbol/edivide.cpp symbol/eminus.cpp symbol/emult.cpp \
	symbol/end.cpp symbol/eplus.cpp symbol/eprime.cpp symbol/eq.cpp \
	symbol/i.cpp symbol/id.cpp symbol/idl.cpp symbol/ini.cpp symbol/inil.cpp \
	symbol/minus.cpp symbol/mult.cpp symbol/num.cpp symbol/openby.cpp \
	symbol/p.cpp symbol/plus.cpp symbol/pv.cpp symbol/read.cpp \
	symbol/symbol.cpp symbol/t.cpp symbol/var.cpp symbol/vir.cpp \
	symbol/write.cpp symbol/symbol.cpp
CPPFILES_INTERPRETER=interpreter/affectation.cpp interpreter/const.cpp \
	interpreter/declaration.cpp interpreter/instruction.cpp \
	interpreter/interpreter.cpp interpreter/read.cpp interpreter/var.cpp \
	interpreter/write.cpp interpreter/value.cpp interpreter/printer.cpp
CPPFILES=$(MAINFILE) $(CPPFILES_INTERPRETER) $(CPPFILES_SYMBOL) \
	$(CPPFILES_STATE) $(CPPFILES_EXCEPTION)

OBJ=$(CPPFILES:.cpp=.o)
OBJS=$(addprefix $(OBJDIR)/,$(OBJ))

FLAGS=-O2

LIBS=-L"/usr/lib" -lboost_program_options -lboost_regex

all: $(OBJS)
	$(GPP) $(CFLAGS) $(FLAGS) -o $(BIN) $(OBJS) $(LIBS)

$(CLEAN):
	rm -f $(OBJS) $(BIN)

$(OBJDIR)/%.o: %.cpp
	$(GPP) $(CFLAGS) $(FLAGS) $(INCLUDE) -c -o $@ $<

