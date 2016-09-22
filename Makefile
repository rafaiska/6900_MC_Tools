DIRINCLUDE=./include
DIROBJETO=./obj
CC=gcc
CFLAGS=-I$(DIRINCLUDE) -lm -g

_DEPEND = taylor.h
DEPEND = $(patsubst %,$(DIRINCLUDE)/%,$(_DEPEND))

_OBJETO = main.o taylor.o
OBJETO = $(patsubst %,$(DIROBJETO)/%,$(_OBJETO))

$(DIROBJETO)/%.o: %.c $(DEPEND)
	@mkdir -p obj
	$(CC) -c -o $@ $< $(CFLAGS)

$(DIROBJETO)/%.o: %.s $(DEPEND)
	@mkdir -p obj
	$(CC) -c -o $@ $< $(CFLAGS)

MC_Tools.out: $(OBJETO)
	@mkdir -p bin
	$(CC) -o ./bin/$@ $^ $(CFLAGS)

