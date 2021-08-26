CC = gcc
CFAGS = -W -Wall
TARGET = main_exe
OBJECTS = InfixToPostfix.o InfixToPostfixMain.o ListBaseStack.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^
clean :
	rm *.o main_exe