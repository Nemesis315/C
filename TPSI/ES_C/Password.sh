#!/bin/bash

password="Matteo"
nome="123"

clear

read -p "Inserire il nome utente: " nome

read -p "Inserire la password: " -s password


if [ $password = "123" ] && [ $nome = "Matteo" ]

then
    echo -e  "\nIl nome inserito e corretto"

    echo -e "\nLa tua password e giusta"

    echo -e "\nIl nome inserito è: $nome"
    
    echo -e "\nLa password inserita è: $password"    

else
    
    echo -e "\nUna delle due credenziali non e stata inserita corretamente"

fi




