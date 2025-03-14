APPS = ./apps
BIN = ./bin
HEADERS = ./headers
LIB = ./lib
OBJ = ./obj
SRC = ./src

FLAGS = -O3 -Wall
LIBS = -lm -lrecursive -L $(LIB)



all: libed myapps

libed: \
	$(OBJ)/functions.o
	ar -rcs $(LIB)/librecursive.a $(OBJ)/*.o


myapps: clean_apps \
	$(BIN)/exercicios

$(OBJ)/%.o: $(SRC)/%.c $(HEADERS)/%.h
	gcc $(FLAGS) -c $< -I $(HEADERS) -o $@

$(BIN)/%: $(APPS)/%.c
	gcc $(FLAGS) $< $(LIBS) -I $(HEADERS) -o $(BIN)/exercicios.bat

run:
	$(BIN)/exercicios.bat

clean:
	rm -rf $(BIN)/* $(LIB)/* $(OBJ)/*

clean_apps:
	rm -rf $(BIN)/*