CC = gcc
CFAGS = -W -Wall
TARGET = main_exe
OBJECTS = CircularQueue.o HamburgerSim.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^
clean :
	rm *.o main_exe