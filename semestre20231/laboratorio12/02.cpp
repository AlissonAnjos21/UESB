#include <iostream>

using namespace std;

int main(){

    int vet1[50], vet2[50];
    for(int i = 0; i < 50; i++){
        cout << "Informe o valor da posicao " << i << ":" << endl;
        cin >> vet1[i];
        vet2[i] = vet1[i];
    }

    cout << "Vetor vet1: " << endl;
    for(int i = 0; i < 50; i++){
        cout << vet1[i] << endl;
    }

    cout << "Vetor vet2: " << endl;
    for(int i = 0; i < 50; i++){
        cout << vet2[i] << endl;
    }

    return 0;
}
