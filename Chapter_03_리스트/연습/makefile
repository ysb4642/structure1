CC = gcc
CFAGS = -W -Wall
TARGET = main_exe
OBJECTS = ArrayList.o Point.o PointListMain.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^
clean :
	rm *.o main_exe