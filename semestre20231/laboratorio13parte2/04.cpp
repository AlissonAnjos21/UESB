#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void bubbleSort(int v[500]){
    int suporte;
    for(int i = 0; i < (500 - 1); i++){
        for(int j = 0; j < (500 - 1); j++){
            if(v[j] > v[j+1]){
                suporte = v[j+1];
                v[j+1] = v[j];
                v[j] = suporte;
            }
        }
    }
}

void bubbleSortMelhor(int v[500]){
    int suporte;
    int sentinela;
    for(int i = 0; i < (500 - 1); i++){
        sentinela = 0;
        for(int j = 0; j < (500 - 1 - i); j++){
            if(v[j] > v[j+1]){
                suporte = v[j+1];
                v[j+1] = v[j];
                v[j] = suporte;
                sentinela = 1;
            }
        }
        if(sentinela == 0){
        break;
        }
    }
}

void imprimir(int v[500]){
    for(int i = 0; i < 500; i++){
        cout << v[i] << endl;
    }
}

int main(){
    
    int vet1[500], vet2[500];
    srand(time(0));
    
    for(int i = 0; i < 500; i++){
        vet1[i] = (rand() % 100) + 1;
        vet2[i] = vet1[i];
    }
    
    bubbleSort(vet1);
    bubbleSortMelhor(vet2);
    
    cout << "Vet1: " << endl;
    imprimir(vet1);
    cout << "\nVet2: " << endl;
    imprimir(vet2);
    
    return 0;
}
