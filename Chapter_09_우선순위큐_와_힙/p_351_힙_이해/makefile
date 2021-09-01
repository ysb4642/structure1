CC = gcc
CFAGS = -W -Wall
TARGET = main_exe
OBJECTS = SimpleHeap.o SimpleHeapMaim.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^
clean :
	rm *.o main_exe