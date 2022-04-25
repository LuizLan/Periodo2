#ifndef ICONTA_H
#define ICONTA_H
#include<vector>
#include<string>
#include<iostream>

using namespace std;

class IConta
{
public:
    IConta();
    ~IConta();

    virtual void sacar(double V) = 0;
    virtual void depositar(double V) = 0;
    virtual double saldoTotalDisponivel() = 0;

private:

};

#endif