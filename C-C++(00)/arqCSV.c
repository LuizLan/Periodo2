#include <stdio.h>
#include <strings.h>
#include <locale.h>

typedef struct pessoa {
    char cpf[15];
    char nome[100];
    char sobnome[100];
    char ender[100];
    char telef[50];
} t_pessoa;

void trim(char *str){
    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }
}

int main(){

    setlocale(LC_ALL,"");

    int n, i;
    t_pessoa cidadao[100];

    //printf("digite a qnt de pessoas: \n");
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++){
        //printf("digite o CPF: \n");
        fgets(cidadao[i].cpf, 15, stdin);
        trim(cidadao[i].cpf);
        //printf("digite o nome da pessoa: \n");
        fgets(cidadao[i].nome, 100, stdin);
        trim(cidadao[i].nome);
        //printf("digite o sobrenome da pessoa: \n");
        fgets(cidadao[i].sobnome, 100, stdin);
        trim(cidadao[i].sobnome);
        //printf("digite o endereco da pessoa: \n");
        fgets(cidadao[i].ender, 100, stdin);
        trim(cidadao[i].ender);
        //printf("digite o telefone da pessoa: \n");
        fgets(cidadao[i].telef, 100, stdin);
        trim(cidadao[i].telef);
    }

    FILE * fp;
    fp = fopen("dadosPop.csv", "w");
    if (fp <= 0){
        printf("erro ao abrir arq(escrita)\n");
        return 1;
    }

    fprintf(fp, "CPF,nome,snome,endereço,telefone\n");

    for(i = 0; i < n; i++){
        fprintf(fp,"%s,%s,%s,%s,%s\n", cidadao[i].cpf, cidadao[i].nome, cidadao[i].sobnome, 
        cidadao[i].ender, cidadao[i].telef);
    }
    fclose(fp);

    fp = fopen("dadosPop.csv", "r");
    if (fp <= 0){
        printf("erro ao abrir arq(leitura)\n");
        return 2;
    }

    char linha[300];

    while (!feof(fp)){
        fgets(linha, 300, fp);
        if(feof(fp)) break;
        printf("%s", linha);
    }
    
    return 0;
}