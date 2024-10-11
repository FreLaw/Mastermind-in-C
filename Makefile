CC = gcc
CFLAGS = -Wall
INCLUDE_DIR = include
SRC_DIR = src
OBJ_DIR = .

# File oggetto
OBJ_FILES = $(OBJ_DIR)/board.o $(OBJ_DIR)/code.o $(OBJ_DIR)/game.o $(OBJ_DIR)/main.o

# Target di default
all: mastermind clean

# Creazione dell'eseguibile
mastermind: $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o mastermind

# Compilazione del file board.o
$(OBJ_DIR)/board.o: $(SRC_DIR)/board.c $(INCLUDE_DIR)/board.h
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $(SRC_DIR)/board.c -o $(OBJ_DIR)/board.o

# Compilazione del file code.o
$(OBJ_DIR)/code.o: $(SRC_DIR)/code.c $(INCLUDE_DIR)/code.h
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $(SRC_DIR)/code.c -o $(OBJ_DIR)/code.o

# Compilazione del file game.o
$(OBJ_DIR)/game.o: $(SRC_DIR)/game.c $(INCLUDE_DIR)/game.h
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $(SRC_DIR)/game.c -o $(OBJ_DIR)/game.o

# Compilazione del file main.o
$(OBJ_DIR)/main.o: $(SRC_DIR)/main.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $(SRC_DIR)/main.c -o $(OBJ_DIR)/main.o

# Pulizia dei file oggetto e dell'eseguibile
clean:
	rm -f $(OBJ_DIR)/*.o mastermind
