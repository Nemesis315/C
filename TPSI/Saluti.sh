#!/bin/bash

nome=""     #Variabile nome

ora=""      #Variabile ora

minuti=""       #Variabile minuti

clear  #Cancello tutto lo schermo prima di eseguire lo script

read -p "Inserisci il tuo nome: " nome     #Chiedo all'utente di inserire il suo nome e poi lo leggo

read -p "Inserire ora e minuti correnti: " ora minuti   #Chiedo all'utente di inserire l'ora e i minuti correnti poi li leggo

echo "Ciao $nome sono le $ora:$minuti"      #Stampo a schermo un messaggio che saluta l'utente e che gli dice che ore sono

