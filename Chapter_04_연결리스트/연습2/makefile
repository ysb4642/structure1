CC = gcc
CFAGS = -W -Wall
TARGET = namemain_exe
OBJECTS = ArrayList.o NameCard.o NameCardListMain.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^
clean :
	rm *.o namemain_exe