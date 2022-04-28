#include <stdio.h>
#include <strings.h>

typedef struct jogador {
    char nome[100];
    int idade;
    int chutes;
    int gols;
} t_jogador;

void trim(char *str){
    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }
}

int main() {

    t_jogador jogador[10];
    int i;
    float pont1, pont2;

    for(i = 0; i<2; i++){
        fgets(jogador[i].nome, 100, stdin);
        trim(jogador[i].nome);

        scanf("%d", &jogador[i].idade);
        getchar();

        scanf("%d", &jogador[i].chutes);
        getchar();

        scanf("%d", &jogador[i].gols);
        getchar();
    }

    pont1 = (1.0*jogador[0].gols) / jogador[0].chutes;
    pont2 = (1.0*jogador[1].gols) / jogador[1].chutes;

    if(pont1 > pont2 ){
        printf("%s(%d)\n", jogador[0].nome, jogador[0].idade);
    }else{
        printf("%s(%d)\n", jogador[1].nome, jogador[1].idade);
    }

    return 0;
}