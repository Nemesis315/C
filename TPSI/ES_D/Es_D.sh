#!/bin/bash

# Controlla se l'argomento è stato fornito
if [ -z "$1" ]; then
  echo "Devi fornire il numero di righe come argomento."
  exit 1
fi

# Assegna l'argomento a una variabile
n=$1

# Ciclo per stampare il triangolo
for ((i=1; i<=n; i++))
do
  # Stampa gli asterischi
  for ((j=1; j<=i; j++))
  do
    echo -n "*"
  done
  # Aggiunge una nuova riga
  echo