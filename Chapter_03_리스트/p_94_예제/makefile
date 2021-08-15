CC = gcc
CFAGS = -W -Wall
TARGET = PointListMain_exe
OBJECTS = ArrayList.o Point.o PointListMain.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^
clean :
	rm *.o PointListMain_exe