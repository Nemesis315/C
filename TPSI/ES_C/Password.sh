#!/bin/bash

password=""

read -p "Inserire la password: " -s password



if [ $password = "123" ]
then

    echo -n "La tua password e sicura"

    echo -e "\nLa password inserita è: $password"    

else

    echo "La password non e sicura"

    read -p "Reinserire la nuova password: " -s password

fi


echo -e "\nLa password inserita è: $password"


