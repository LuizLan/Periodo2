#include<iostream>
#include<string>

using namespace std;

int main(){

    int aquat, pred, domes, notur, voa;
    string aves[]= {"Coruja", "Pardal", "Galinha", "Ema", "Falcão","Pato", 
                    "Pinguim", "Gaivota", "Garça", "Avestruz"};

    int valores[][10]{{0, 1, 0, 1, 1}, 
                      {0, 0, 0, 1, 0},
                      {0, 0, 1, 1, 0},
                      {0, 1, 0, 0, 0},
                      {0, 1, 0, 1, 0},
                      {1, 0, 0, 1, 0},
                      {1, 1, 0, 0, 0},
                      {1, 1, 0, 1, 0},
                      {1, 1, 0, 1, 1},
                      {0, 0, 0, 0, 0}};
    
    cin >> aquat;
    cin >> pred;
    cin >> domes;
    cin >> voa;
    cin >> notur;

    for (int i = 0; i < 10; i++) {
        if ((valores[i][0] == aquat) and (valores[i][1] == pred) and (valores[i][2] == domes) and (valores[i][3] == voa) and (valores[i][4] == notur)) {
            cout << aves[i] << endl;
            break;
        }
    }

    return 0;
}