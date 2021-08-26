CC = gcc
CFAGS = -W -Wall
TARGET = main_exe
OBJECTS = InfixCalculator.o InfixCalculatorMain.o InfixToPostfix.o ListBaseStack.o PostCalculater.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^
clean :
	rm *.o main_exe