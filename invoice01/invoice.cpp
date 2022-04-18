#include<iostream>
#include<string>
#include "invoice.h"

invoice::invoice(){

}

float invoice::getInvoiceAmount(){

    return preco * quantidade;
}