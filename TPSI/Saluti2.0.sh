#!/bin/bash

nome=""     #Variabile nome

ora=""      #Variabile ora

minuti=""       #Variabile minuti

clear  #Cancello tutto lo schermo prima di eseguire lo script
echo -n "Inserire il nome: "
read nome

if [ -gt "$nome" ]
then
    echo -n "Inserire l'ora corrente: "
    read ora


    echo -n "Inserire minuti correnti: "
        read minuti

    if [ "$ora" -ge 1 && "$ora" -le 24 ] 
    then

        if [ "$minuti" -ge 1 && "$minuti" -le 60 ]
        then

            echo -n "Inserire minuti correnti: "
            read minuti
        else

            echo
        fi


    else
        echo "L'ora inseriti non e corretta"

        echo -n "Reinserire l'ora: "
        read ora

    fi

else

    echo "Il nome inserito e sbaglio"

    echo -n "Reinserire il nome: "
    read nome

fi

echo "Ciao $nome sono le $ora.$minuti"      #Stampo a schermo un messaggio che saluta l'utente e che gli dice che ore sono