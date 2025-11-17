#!/bin/bash

read -p "Inserisci il numero di righe: " num
num=""

# Ciclo per stampare il triangolo
for ((i=1; i<=num; i++))
do
  # Stampa gli asterischi
  for ((j=1; j<=i; j++))
  do
    echo -n "*"
  done