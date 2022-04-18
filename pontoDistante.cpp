#include <iostream>
#include <stdio.h>
#include <cmath>


using namespace std;

typedef struct Ponto{
    int x;
    int y;
}t_ponto;

float distPont(t_ponto coord0, t_ponto coordN){
    
    return sqrt(pow((coordN.x - coord0.x), 2) + pow((coordN.y - coord0.y), 2));    
}
 
int main() {

    t_ponto coord[100];
    int qntd, i, maisPert;
    float dist[100], parcial;

    cin >> coord[0].x >> coord[0].y;

    cin >> qntd;

    for(i = 1; i <= qntd; i++){
        cin >> coord[i].x >> coord[i].y;

        //dist[i] = pow((coord[i].x - coord[0].x), 2) + pow((coord[i].y - coord[0].y), 2);
        dist[i] = distPont(coord[0], coord[i]);
    }

    maisPert = 1;
    
    for ( i = 1; i < qntd; i++){
        if (dist[maisPert] > dist[i+1]){
            maisPert = i + 1;
        }
    }
    

    cout <<"Ponto mais perto é "<<"("<<coord[maisPert].x<<", "<< coord[maisPert].y<<")";

    return 0;
}