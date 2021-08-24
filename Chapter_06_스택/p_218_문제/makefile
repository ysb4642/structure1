CC = gcc
CFAGS = -W -Wall
TARGET = main_exe
OBJECTS = CLinkedList.o CLLBaseStack.o CLLBaseStackMain.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^
clean :
	rm *.o main_exe