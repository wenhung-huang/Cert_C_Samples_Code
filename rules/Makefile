cc=gcc 
FLAG=-W -Wall
SRC=$(shell find . -name '*.c')
OBJ=$(SRC:.c=.o)

all: $(OBJ)
	

%.o: %.c
	$(CC) $(FLAG) -o $@ -c $<

clean:
	rm -f $(OBJ)
