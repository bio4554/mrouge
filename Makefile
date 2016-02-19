C=g++
CFLAGS=-c -lncurses -std=c99
LDFLAGS= -lncurses -std=c99
SOURCES=src/main.c src/funcs.c
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=mrouge

all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
