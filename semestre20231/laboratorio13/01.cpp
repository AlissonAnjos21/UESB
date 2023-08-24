#include <iostream>

using namespace std;

int main(){

    // A.
    int matriz[3][3] = {0};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // B.
    int l, c;
    cout << "Informe o numero da linha: ";
    cin >> l;
    cout << "Informe o numero da coluna: ";
    cin >> c;
    cout << matriz[l-1][c-1] << endl;

    // C.
    cout << "Informe o numero da linha: ";
    cin >> l;
    for(int i = 0; i < 3; i++){
        cout << matriz[l-1][i] << " ";
    }

    return 0;
}
