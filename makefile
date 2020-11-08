BINAME := example
BINDIR := bin
OBJDIR := obj
INCDIR := inc
SRCDIR := src

OBJ := example.o
OBJS := $(patsubst %, $(OBJDIR)/%, $(OBJ))

all: main
.PHONY: all

main: $(OBJS)
	$(CC) $(SRCDIR)/main.c $(OBJS) -O3 -o $(BINDIR)/$(BINAME) -I$(INCDIR)

debug: $(OBJS)
	$(CC) $(SRCDIR)/main.c $(OBJS) -g -o $(BINDIR)/$(BINAME)_debug -I$(INCDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $< -c -o $@ -I$(INCDIR)
