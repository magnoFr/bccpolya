CC=gcc
CFLAGS=-W -Wall -pedantic -std=c11

SRC=$(wildcard *.c)
BIN=$(SRC:.c=)


.PHONY: all clean help

help:
	@echo"  Opções:"
	@echo"       all:compila todas as fontes"
	@echo"       clean:apaga todos os binários feitos"
	@echo""

all:  $(BIN)

clean:
	@rm -f $(BIN)

%:%.c
	@(CC) $< -o $@ $(CFLAGS) && echo "[tudo certo]" 