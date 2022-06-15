#pragma once

template<class T>

class Estatisticas
{
    public:
        Estatisticas(){};
        virtual ~Estatisticas(){};

        int indexOfMaior(vector<T>vec){
            float maior = vec[0].getTotal();
            int indexM = 0;
            for(int i = 0; i < vec.size(); i++){
                if(vec[i].getTotal() > maior){
                    maior = vec[i].getTotal();
                    indexM = i;
                }
            }
            return indexM;
        }

        int indexOfmenor(vector<T>vec){
            int indexm = 0;
            float menor = vec[0].getTotal();
            for(int i = 0; i < vec.size(); i++){
                if(vec[i].getTotal() < menor){
                    menor = vec[i].getTotal();
                    indexm = i;
                }
            }
            return indexm;
        }

        float media(vector<T>vec){
            float soma=0;
            for(int i = 0; i < vec.size(); i++){
                soma += vec[i].getTotal();
            }
            return soma/vec.size();
        }

    protected:

    private:
};