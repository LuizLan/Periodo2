#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

typedef struct Ponto{
    int x;
    int y;
}t_ponto;
 
int main() {

    t_ponto coord1, coord2;
    float dist, parcial;

    cin >> coord1.x >> coord1.y;
    cin >> coord2.x >> coord2.y;

    dist = pow((coord1.x - coord2.x), 2) + pow((coord1.y - coord2.y), 2);

    cout << dist;

    return 0;
}