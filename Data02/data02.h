#ifndef DATA02_H
#define DATA02_H

class data02{

    private:

        int mes, dia, ano;

    public:
        data02();

        void setDia(int x);
        int getDia();
        void setMes(int x);
        int getMes();
        void setAno(int x);
        int getAno();

        void printData();

};

#endif