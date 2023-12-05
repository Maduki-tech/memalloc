CC=gcc
CFLAGS=-I../include -I/opt/homebrew/Cellar/check/0.15.2/include -Wall
LDFLAGS=-L/opt/homebrew/Cellar/check/0.15.2/lib
LIBS=-lcheck
DEPS = ../include/my_allocator.h
OBJ = ../src/my_allocator.o test_my_allocator.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
	$(CC) -o test_my_allocator $^ $(CFLAGS) $(LDFLAGS) $(LIBS)
	./test_my_allocator

.PHONY:
	clean
	compile_commands

clean:
	rm -f *.o test_my_allocator

compile_commands:
	bear -- make
