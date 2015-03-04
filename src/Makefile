BINDIR=bin
OBJDIR=obj

BINNAME=Lutin
BIN=$(BINDIR)/$(BINNAME)
CLEAN=clean

DIR="./"

GPP=g++
CFLAGS=-Wall -Wextra -Wmissing-braces -pedantic -Wunused
INCLUDE=-I"./" -I"./interpreter/"

INTERPDIR=interpreter
SYMBOLDIR=symbol

MAINFILE=main.cpp
#CPPFILES=$(MAINFILE) $(addprefix $(INTERPDIR)/,$(CPPFILESINTERP)) automaton.cpp
#CPPFILESINTERP= interperter.cpp
CPPFILES=$(MAINFILE) automaton.cpp interpreter/interpreter.cpp

OBJ=$(CPPFILES:.cpp=.o)
OBJS=$(addprefix $(OBJDIR)/,$(OBJ))

FLAGS=-O2

LIBS=

all: $(OBJS)
	$(GPP) $(CFLAGS) $(FLAGS) $(LIBS) -o $(BIN) $(OBJS)

$(CLEAN):
	rm -f $(OBJS) $(BIN)

$(OBJDIR)/%.o: %.cpp
	$(GPP) $(CFLAGS) $(FLAGS) $(INCLUDE) -c -o $@ $<

