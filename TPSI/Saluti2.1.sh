#!/bin/bash

nome=""     #Variabile nome

ora=""      #Variabile ora

minuti=""       #Variabile minuti

clear  #Cancello tutto lo schermo prima di eseguire lo script
echo -n "Inserire il nome: "
read nome

if [ -z "$nome" ]
then
    echo "Attenzione! Inserire un nome"

    echo -n "Inserire il nome: "
    read nome

    

else
    echo -n "Inserire l'ora corrente: "
    read ora

    

    if [ $ora -ge 1 -a $ora -le 24 ] 
    then

        echo -n "Inserire minuti correnti: "
        read minuti

        if [ $minuti -ge 1 -a $minuti -le 60 ]
        then

            echo

        else  
            echo
        fi


    else
        echo "L'ora inseriti non e corretta"

        echo -n "Reinserire l'ora: "
        read ora

    fi
fi

echo "Ciao $nome sono le $ora.$minuti"      #Stampo a schermo un messaggio che saluta l'utente e che gli dice che ore sono