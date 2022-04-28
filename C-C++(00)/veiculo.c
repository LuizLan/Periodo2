#include <stdio.h>
#include <strings.h>

typedef struct carro {
    char modelo[50];
    char marca[50];
    int anofab;
    int preco;
} t_carro;

void trim(char *str){
    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }
}

int main() {

    t_carro carro[10];
    int i;

    for(i = 0; i<2; i++){
        fgets(carro[i].modelo, 50, stdin);
        trim(carro[i].modelo);

        fgets(carro[i].marca, 50, stdin);
        trim(carro[i].marca);

        scanf("%d", &carro[i].anofab);
        getchar();

        scanf("%d", &carro[i].preco);
        getchar();
    }

    if(carro[0].anofab < carro[1].anofab){
        printf("%s %s", carro[0].marca, carro[0].modelo);
    }else if(carro[1].anofab < carro[0].anofab){
        printf("%s %s", carro[1].marca, carro[1].modelo);
    }else{
        if(carro[0].preco < carro[1].preco){
            printf("%s %s", carro[0].marca, carro[0].modelo);
        }else{
            printf("%s %s", carro[1].marca, carro[1].modelo);
        }
    }

    return 0;
}