CC = gcc
CFAGS = -W -Wall
TARGET = main_exe
OBJECTS = DBDLinkedList.o DBDLinkedListMain.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^
clean :
	rm *.o main_exe