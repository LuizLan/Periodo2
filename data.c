#include <stdio.h>
#include <locale.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
}t_data;

int maisVelha(t_data data1, t_data data2){

    if(data1.ano < data2.ano){
        return 1;
    }else if (data2.ano < data1.ano){
        return 2;
    }else if(data1.mes < data2.mes){
        return 1;
    }else if (data2.mes < data1.mes){
        return 2;
    }else if (data1.dia < data2.dia){
        return 1;
    }else if (data2.dia < data1.dia){
        return 2;
    }else{
        return 0;
    }
}
 
int main() {

    setlocale(LC_ALL,"");

    t_data d1, d2;
    int result;

    scanf("%d%d%d", &d1.dia, &d1.mes, &d1.ano);
    scanf("%d%d%d", &d2.dia, &d2.mes, &d2.ano);

    result = maisVelha(d1, d2);

    if(result == 1){
        printf("Pessoa 1 é mais velha\n");

    }else if (result == 2){
        printf("Pessoa 2 é mais velha\n");
        
    }else{
        printf("Pessoas são da mesma idade\n");
    }

    return 0;
}