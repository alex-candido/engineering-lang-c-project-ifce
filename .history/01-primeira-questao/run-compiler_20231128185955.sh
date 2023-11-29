#!/bin/bash

   gcc ./src/main.c ./src/services/gerarVetorAleatorio.c -o function_01
   gcc ./src/main.c ./src/services/imprimirMensagem.c -o function_02
   gcc ./src/main.c ./src/services/imprimirVetor.c -o function_03

   ./main

