CC = gcc
CFAGS = -W -Wall
TARGET = mainfile_exe
OBJECTS = ArrayList.o Point.o PointListMain.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^
clean :
	rm *.o mainfile_exe