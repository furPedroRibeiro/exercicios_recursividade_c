APPS = ./apps
BIN = ./bin
HEADERS = ./headers
LIB = ./lib
OBJ = ./obj
SRC = ./src

FLAGS = -O3 -Wall
LIBS = -lm -led -L $(LIB)



all: libed myapps

libed: \
	$(OBJ)/nome_arquivo.o
	ar -rcs $(LIB)/libed.a $(OBJ)/*.o


myapps: clean_apps \
	$(BIN)/nome_programa

$(OBJ)/%.o: $(SRC)/%.c $(HEADERS)/%.h
	gcc $(FLAGS) -c $< -I $(HEADERS) -o $@

$(BIN)/%: $(APPS)/%.c
	gcc $(FLAGS) $< $(LIBS) -I $(HEADERS) -o $@

run:
	$(BIN)/nome_program

clean:
	rm -rf $(BIN)/* $(LIB)/* $(OBJ)/*

clean_apps:
	rm -rf $(BIN)/*