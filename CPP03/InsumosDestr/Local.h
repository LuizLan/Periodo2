#include<vector>
#include"Insumos.h"

#pragma once

using namespace std;

class Local{

public:
    Local();
    ~Local();

    void addInsumoArr(Insumos *In, int i);
    void addInsumoVec(Insumos *In);

protected:

private:
    Insumos *insumosArr[10];
    vector<Insumos*> insumosVec = vector<Insumos*>(10);

};