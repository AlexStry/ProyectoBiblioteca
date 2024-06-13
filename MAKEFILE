CXX = g++
CXXFLAGS = -std=c++11 -Wall
SOURCES = main.cpp Libro.cpp Biblioteca.cpp
HEADERS = Libro.h Biblioteca.h
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = main

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
