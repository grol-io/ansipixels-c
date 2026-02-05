
all: ansipixels

format:
	clang-format -i *.c *.h

CFLAGS = -g -Wall -Wextra -pedantic -Werror -fsanitize=address -DDEBUG=1

ansipixels: main.o buf.o str.o Makefile
	$(CC) $(CFLAGS) -o $@ main.o buf.o str.o
	./$@

clean:
	rm -rf *.o *.dSYM ansipixels


.PHONY: clean all format
