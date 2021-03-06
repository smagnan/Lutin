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

MAINFILE=main.cpp automaton.cpp argsmanager.cpp utils.cpp loader.cpp  debugger.cpp lexer.cpp
CPPFILES_EXCEPTION=exception/operationException.cpp exception/syntaxException.cpp \
	exception/automatonException.cpp exception/mathException.cpp
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
CPPFILES_SYMBOL=symbol/aff.cpp symbol/bd.cpp symbol/bditer.cpp symbol/bi.cpp \
	symbol/biiter.cpp symbol/closeby.cpp symbol/const.cpp symbol/dconst.cpp \
	symbol/d.cpp symbol/divide.cpp symbol/dvar.cpp symbol/ebin.cpp symbol/e.cpp \
	symbol/eminus.cpp symbol/end.cpp symbol/eplus.cpp symbol/eprime.cpp symbol/eq.cpp \
	symbol/et.cpp symbol/f.cpp symbol/fid.cpp symbol/fnum.cpp symbol/fpar.cpp \
	symbol/i.cpp symbol/id.cpp symbol/idl.cpp symbol/idliter.cpp symbol/iecrire.cpp \
	symbol/iaff.cpp symbol/ilire.cpp symbol/ini.cpp symbol/inil.cpp symbol/iniliter.cpp \
	symbol/minus.cpp symbol/mult.cpp symbol/num.cpp symbol/openby.cpp symbol/p.cpp \
	symbol/plus.cpp symbol/pv.cpp symbol/read.cpp symbol/symbol.cpp symbol/tbin.cpp \
	symbol/t.cpp symbol/tdivide.cpp symbol/tf.cpp symbol/tmult.cpp symbol/var.cpp \
	symbol/vir.cpp symbol/write.cpp


CPPFILES_INTERPRETER=interpreter/affectation.cpp interpreter/const.cpp \
	interpreter/declaration.cpp interpreter/instruction.cpp \
	interpreter/interpreter.cpp interpreter/read.cpp interpreter/var.cpp \
	interpreter/write.cpp interpreter/value.cpp interpreter/printer.cpp
CPPFILES=$(MAINFILE) $(CPPFILES_INTERPRETER) $(CPPFILES_SYMBOL) \
	$(CPPFILES_STATE) $(CPPFILES_EXCEPTION)

OBJ=$(CPPFILES:.cpp=.o)
OBJS=$(addprefix $(OBJDIR)/,$(OBJ))

FLAGS=-O2
DEBUGFLAGS=-g3 -gdwarf-2 -g -DDEBUG

LIBS=-L"/usr/lib" -lboost_program_options -lboost_regex

all: executable

debug: FLAGS += $(DEBUGFLAGS)
debug: executable

executable: $(OBJS)
	$(GPP) $(CFLAGS) $(FLAGS) -o $(BIN) $(OBJS) $(LIBS)

test: executable
	../tests/mktest.sh

$(CLEAN):
	rm -f $(OBJS) $(BIN)

$(OBJDIR)/%.o: %.cpp
	$(GPP) $(CFLAGS) $(FLAGS) $(INCLUDE) -c -o $@ $<

