CC=gcc
CFLAGS=-Iinclude -Wall
DEPS = include/my_allocator.h
OBJ = src/my_allocator.o src/main.o

%.o: %.c $(DEPS)
	$(CC) -g -c -o $@ $< $(CFLAGS)

a: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)


.PHONY: 
	compile_commands

clean:
	rm -f src/*.o a

compile_commands:
	bear -- make
