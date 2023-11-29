#!/bin/bash

   gcc \
   ./src/main.c \
   ./src/services/gerarVetorAleatorio.c \ 
   ./src/services/imprimirMensagem.c \
   ./src/services/imprimirVetor.c \
   -o main

