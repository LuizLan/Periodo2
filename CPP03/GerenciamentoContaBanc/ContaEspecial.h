#include"ContaCorrente.h"

#pragma once

class ContaEspecial : public ContaCorrente{
    public:
        ContaEspecial(double = 0.0, string = "Undefined", int = 0, double = 0.0);

        void setLimite();
};