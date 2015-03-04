BINDIR=bin
OBJDIR=obj

BINNAME=Lutin
BIN=$(BINDIR)/$(BINNAME)
CLEAN=clean

DIR="./"

GPP=g++
CFLAGS=-Wall -Wextra -Wmissing-braces -pedantic -Werror
INCLUDE=-I"./"

MAINFILE=main.cpp

CPPFILES=$(MAINFILE) State.cpp

OBJ=$(CPPFILES:.cpp=.o)
OBJABS=$(addprefix $(OBJDIR)/,$(OBJ))
OBJS=$(addprefix $(DIR)/,$(OBJABS))

BINS=$(addprefix $(DIR)/,$(BIN))

FLAGS=-O2

LIBS=-lsfml-system -lsfml-window -lsfml-graphics

all: $(OBJS)
	$(GPP) $(CFLAGS) $(FLAGS) $(LIBS) -o $(BINS) $(OBJS)

$(CLEAN):
	rm -f $(OBJS) $(BINS)

$(OBJDIR)/%.o: %.cpp
	$(GPP) $(CFLAGS) $(FLAGS) $(INCLUDE) -c -o $@ $<

