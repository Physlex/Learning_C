PROJECT := Learning_C

CC := g++

SRC_DIR := src
SRC_INCLUDE := include
INCLUDE := -I	${SRC_INCLUDE}

.DEFAULT_GOAL := all

*.o: %.c
	$(CC) -c $< -o $@

.PHONY: all
clean:
	rm -rf *~ bin/*.o

all:	$(SRC_DIR)
	$(CC) -o $(PROJECT) $(INCLUDE) $(SRC_DIR)/*.c
