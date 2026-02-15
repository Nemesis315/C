#ifndef CONTATORE_H
#define CONTATORE_H


class Contatore
{
    private:

    int valore;
    int passo;

    public:
    Contatore(int valore = 0, int passo = 1);
    void incrementa();
    void decrementa();
    int getValore();
    int getPasso();
    void setValore(int valore);
    void setPasso(int passo);
    void reset();
    

};

#endif