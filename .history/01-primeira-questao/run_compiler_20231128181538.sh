#!/bin/bash

   # gcc ./src/main.c ./src/services/imprimirMensagem.c -o main

   if ($?) { gcc main.c -o main } ; if ($?) { .\main }