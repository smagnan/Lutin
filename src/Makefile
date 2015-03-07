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
CPPFILES_INTERPRETER=interpreter/affectation.cpp interpreter/const.cpp \
	interpreter/declaration.cpp interpreter/instruction.cpp \
	interpreter/interpreter.cpp interpreter/read.cpp interpreter/var.cpp \
	interpreter/write.cpp interpreter/value.cpp interpreter/printer.cpp
CPPFILES=$(MAINFILE) $(CPPFILES_INTERPRETER) 

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

