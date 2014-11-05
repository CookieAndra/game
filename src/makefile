CFLAGS = -Wall -Werror
CC = gcc

all: morris

morris: morris.c connect.c utilities.c wrapper.c 
		$(CC) $(CFLAGS) -o morris morris.c connect.c utilities.c wrapper.c

clean:
		rm -f *.o morris