#ifndef INVOICE02_H
#define INVOICE02_H
#include<string>

class invoice{

    private:

        int num, quantidade;
        float preco;
        std::string descricao;

    public:
        invoice();

        void setNum(int x);
        int getNum();
        void setQuantidade(int x);
        int getQuantidade();
        void setPreco(float x);
        float getPreco();
        void setDescricao(std::string x);
        std::string getDescricao();
        float getInvoiceAmount();

};

#endif