CC=gcc
CFLAGS=-I.
LIBS=
DEPS= logging.h
OBJ = logging.o

# $@ matches the target; $< matches the first dependent
logging.o: logging.c $(DEPS)
	$(CC) -c -o $@ $< $(LIBS) $(CFLAGS)

clean:
	rm *.o
