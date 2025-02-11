#!/bin/bash

clear

read -p "Inserire il nome utente: " nome

read -p "Inserire la password: " -s password



if [ $password = "123" ] && [ $nome = "Matteo"]
then
    echo  "Il nome inserito e corretto"

    echo  "La tua password e giusta"

    echo -e "\nLa password inserita è: $password"    

else
    echo  "Il nome inserito non e corretto"

    echo "La password inserira e sbagliata"
fi


echo -e "\nLa password inserita è: $password"


