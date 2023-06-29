#include <iostream>

using namespace std;

void imprimeMatriz(int[4][4]);
void multK(int[4][4], int[4][4]);

int main(){

    int M[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int Mk[4][4];

    multK(M, Mk);
    imprimeMatriz(Mk);

    return 0;
}

void imprimeMatriz(int M[4][4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

void multK(int M[4][4], int Mk[4][4]){
    int k;
    cout << "Informe uma constante: " << endl;
    cin >> k;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            Mk[i][j] = M[i][j] * k;
        }
    }
}
