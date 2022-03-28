TARGET = app
OBJ = test1.o test2.o test3.o
CC = gcc
CFLAGS = -c


$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

test1.o: test1.c 
	$(CC) $(CFLAGS) test1.c

test2.o: test2.c 
	$(CC) $(CFLAGS) test2.c

test3.o: test1.c 
	$(CC) $(CFLAGS) test3.c 

clean:
	rm -rf $(TARGET) $(OBJ)
