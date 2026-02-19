#ifndef ROMBO_H
#define ROMBO_H

#include "Quadrilatero.h"

class Rombo : public Quadrilatero
{
    private:
        int diagonale1;
        int diagonale2;

    public:
        Rombo(int lato1 = 1, int lato2 = 1, int lato3 = 1, int lato4 = 1, int diagonale1 = 1, int diagonale2 = 1);
        void setDiagonale1(int diagonale1);
        void setDiagonale2(int diagonale2);
        void stampaRombo();

        void calcolaArea();
        void calcolaPerimetro();
};

#endif // ROMBO_H