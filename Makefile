CC = g++
BIN = built
SRC = $(wildcard *.cpp)
HEAD = $(wildcard *.h)
OBJ = $(patsubst %.cpp,%.o,$(SRC))
CFLAGS = `pkg-config --cflags sdl2 SDL2_ttf SDL2_image` -Wall -g# -Werror
LIBS = `pkg-config --libs sdl2 SDL2_ttf SDL2_image`# -lm -lpthread

all: $(BIN)
	./$(BIN)

clean:
	rm -rf $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CC) $(OBJ) $(LIBS) -o $(BIN)

%.o: %.cpp $(HEAD)
	$(CC) -c -o $@ $< $(CFLAGS)
