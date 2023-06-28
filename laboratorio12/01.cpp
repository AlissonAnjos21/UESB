#include <iostream>

using namespace std;

int main(){

    int vetor[20], apenasPar = 1;

    for(int i = 0; i < 20; i++){
        cout << "Informe o valor da posicao " << i << ":" << endl;
        cin >> vetor[i];
        if(vetor[i] % 2 != 0){
            apenasPar = 0;
        }
    }

    if(apenasPar == 1){
        cout << "Existem apenas valores pares!" << endl;
    }else{
        cout << "Nem todos os valores sao pares!" << endl;
    }

    return 0;
}
