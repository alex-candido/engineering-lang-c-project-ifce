#!/bin/bash

   gcc \
   ./src/main.c \
   ./src/services/gerarVetorAleatorio.c \ 
   -o main

   gcc \
   ./src/main.c \
   ./src/services/imprimirMensagem.c \
   -o main

   gcc \
   ./src/main.c \
   ./src/services/imprimirVetor.c \
   -o main

      
   

