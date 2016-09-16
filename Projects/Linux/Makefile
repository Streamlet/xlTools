
CC = g++
CFLAGS = -Wall
LFLAGS = 

SOURCES := $(wildcard *.cpp ../../Test/*.cpp)
OBJECTS := $(SOURCES:%.cpp=%.o)
TARGET = test

$(TARGET) : $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET) $(LFLAGS)

clean:
	@rm -f $(OBJECTS) $(TARGET)
distclean: clean

all: clean $(TARGET)


