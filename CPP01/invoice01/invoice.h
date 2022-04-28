#ifndef INVOICE_H
#define INVOICE_H
#include<string>


class invoice{

    public:
        invoice();

        int num, quantidade;
        float preco;
        std::string descricao;

        float getInvoiceAmount();


    private:

};

#endif