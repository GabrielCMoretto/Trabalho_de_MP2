IDIR =../include
CC=g++
EXT = c
CFLAGS=-ftest-coverage -fprofile-arcs-I $(IDIR) -Wall

ODIR=obj
LDIR =../lib

GTESTLIBS = /usr/lib/libgtest.a -lgtest -lpthread
LIBS=$(GTESTLIBS) -lm

_DEPS = funcao.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = funcao_teste.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.$(EXT) $(DEPS)
	$(CC) -g -c -o $@ $< $(CFLAGS)

Trabalho_2: $(OBJ)
	$(CC) -g -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
