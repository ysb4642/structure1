CC = gcc
CFAGS = -W -Wall
TARGET = main_exe
OBJECTS = PriorityQueue.o UsefulHeap.o PQStringMain.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^
clean :
	rm *.o main_exe