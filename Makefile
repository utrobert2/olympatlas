CXX = g++
CXXFLAGS = -std=c++11 -Wall
SFMLFLAGS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
EXEC = myGame
SRC = main.cpp

all: $(EXEC)

%.o: %.cpp
	$(CXX) -c $< -o $@

%.o: %.h
	$(CXX) -c $< -o $@

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC) $(SFMLFLAGS)

clean:
	@echo "** Removing object files and executable..."
	rm -f $(EXEC)