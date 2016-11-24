CC = gcc
CFLAGS = -g -Wall -Werror -std=c99 -m64
all: lexer

lexer: 
	lex -o lexer.c smallc.l
	gcc lexer.c -o lexer

clean:
	rm -f lexer
	rm -f lexer.c
