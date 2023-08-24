#include "cabecalhoTeste03.h"
#include <iostream>

using namespace std;

int main(){

    int sentinela = 0;
    while(sentinela != -1){
        teste();
        cout << "\n\n\nDigite qualquer valor diferente de -1 para continuar" << endl;
        cin >> sentinela;
    }

    return 0;
}

void teste(){
    static int contador = 0;
    int nova = 0;

    contador++;
    nova+=5;

    cout << "Valor de contador: " << contador << endl;
    cout << "Valor de nova: " << nova << endl;
}
