CC = gcc
CFAGS = -W -Wall
TARGET = main_exe
OBJECTS = DBLinkedList.o DBLinkedListMain.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^
clean :
	rm *.o main_exe