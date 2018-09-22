CC = gcc

CFLAGS = -std=c99
CFLAGS += -O0
CFLAGS += -Wall -Wextra -Wpedantic -Winline

SRC_FILES = $(wildcard *.c mbedtls/*.c)
DEP_FILES = $(wildcard *.c *.h mbedtls/*.c mbedtls/*.h Makefile)
EXE = a.out

$(EXE): $(DEP_FILES)
	$(CC) $(CFLAGS) $(SRC_FILES) -o $(EXE)

.PHONY: clean
clean:
	$(RM) $(EXE)
