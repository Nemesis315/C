#ifndef QUADRILATERO_H
#define QUADRILATERO_H


class Quadrilatero
{
    protected:
        int lato1;
        int lato2;
        int lato3;
        int lato4;

    public:
        Quadrilatero(int lato1 = 1, int lato2 = 1, int lato3 = 1, int lato4 = 1);
        void setLato1(int lato1);
        void setLato2(int lato2);
        void setLato3(int lato3);
        void setLato4(int lato4);

        void stampaLati();

        void calcolaPerimetro();
};


#endif // QUADRILATERO_H