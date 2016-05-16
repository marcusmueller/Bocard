CFLAGS+=-O3 -Wall
all: bocard
bocard: bocard.c
	gcc ${CFLAGS} -o bocard bocard.c -lgmp
