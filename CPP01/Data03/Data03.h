#ifndef DATA03_H
#define DATA03_H

class Data03{

    private:

        int mes, dia, ano;

    public:
        Data03();
        int getDiaMes();
        Data03(int d, int m, int a);

        void setDia(int d);
        int getDia();
        void setMes(int m);
        int getMes();
        void setAno(int a);
        int getAno();

        void avancarDia();
        void printData();
};

#endif