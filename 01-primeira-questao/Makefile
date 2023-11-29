APPS = ./apps
BIN = ./bin
INCLUDE = ./include
LIB = ./lib
OBJ = ./obj
SRC = ./src

FLAGS = -O3 -Wall
LIBS = -lm -led -L $(LIB)

all: libed myapps

libed: \
	$(OBJ)/classificar_posicoes_impares.o \
	$(OBJ)/classificar_posicoes_pares.o \
	$(OBJ)/gerar_fibonacci.o \
	$(OBJ)/gerar_metodo_bolha.o \
	$(OBJ)/gerar_vetor_aleatorio.o \
	$(OBJ)/imprimir_mensagem.o \
	$(OBJ)/imprimir_vetor.o 
	ar -rcs $(LIB)/libed.a $(OBJ)/*.o


myapps: clean_apps \
	$(BIN)/app 

$(OBJ)/%.o: $(SRC)/%.c $(INCLUDE)/%.h
	gcc $(FLAGS) -c $< -I $(INCLUDE) -o $@

$(BIN)/%: $(APPS)/%.c
	gcc $(FLAGS) $< $(LIBS) -I $(INCLUDE) -o $@

run:
	$(BIN)/app

clean:
	rm -rf $(BIN)/* $(LIB)/* $(OBJ)/*

clean_apps:
	rm -rf $(BIN)/*