CC = gcc
CFAGS = -W -Wall
TARGET = NameCardListMain_exe
OBJECTS = ArrayList.o NameCard.o NameCardListMain.o Point.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^
clean :
	rm *.o NameCardListMain_exe
	