#include "Animale_h"
#include <iostream>

using namespace std;

Animale::Animale(int Classificazione, int Sesso, int Longevita, int Velocita, string Nome)
{
    this->Classificazione = Classificazione;
    this->Sesso = Sesso;
    this->Longevita = Longevita;
    this->Velocita = Velocita;
    this->Nome = Nome;
}

void Animale::setClassificazione(int Classificazione)
{
    this->Classificazione = Classificazione;
}

void Animale::setSesso(int Sesso)
{
    this->Sesso = Sesso;
}

void Animale::setLongevita(int Longevita)
{
    this->Longevita = Longevita;
}

void Animale::setVelocita(int Velocita)
{
    this->Velocita = Velocita;
}

void Animale::setNome(string Nome)
{
    this->Nome = Nome;
}

int Animale::getClassificazione()
{
    return Classificazione;
}
int Animale::getSesso()
{
    return Sesso;
}
int Animale::getLongevita()
{
    return Longevita;
}
int Animale::getVelocita()
{
    return Velocita;
}
string Animale::getNome()
{
    return Nome;
}

void Animale::mangia()
{
    cout << "L'animale " << Nome << " sta mangiando." << endl;
}

void Animale::dorme()
{
    cout << "L'animale " << Nome << " sta dormendo." << endl;
}

void Animale::siMuove()
{
    cout << "L'animale " << Nome << " si sta muovendo." << endl;
}