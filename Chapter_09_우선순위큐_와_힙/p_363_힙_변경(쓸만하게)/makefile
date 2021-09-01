CC = gcc
CFAGS = -W -Wall
TARGET = main_exe
OBJECTS = UsefulHeap.o UsefulHeapMain.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^
clean :
	rm *.o main_exe