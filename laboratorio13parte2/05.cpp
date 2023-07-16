#include <iostream>

using namespace std;

void bubbleSortMelhor(int v[10]){
    int suporte;
    int sentinela;
    for(int i = 0; i < (10 - 1); i++){
        sentinela = 0;
        for(int j = 0; j < (10 - 1 - i); j++){
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

int buscaBinaria(int v[10], int chave){
    int inicio = 0;
    int fim = 10;
    int posicao;
    int contador = 0;
    
    do{
        posicao = (inicio+fim) / 2;
        
        if(v[posicao] == chave){
            return posicao;
        }else if(v[posicao] > chave){
            fim = posicao;
        }else{
            inicio = posicao;
        }
        
        contador++;
    }while(contador < (10/2));
    
    return -1;
}

int main(){
    
    int chave;
    cout << "Informe a chave: " << endl;
    cin >> chave;
    
    int v[10] = {12, 9, 1, 4, 21, 42, 5, 100, 71, 0};
    
    bubbleSortMelhor(v);
    int resultado = buscaBinaria(v, chave);
    
    if(resultado >= 0){
        cout << "A posicao desse valor e: " << resultado << endl;
    }else{
        cout << "Esse valor nao existe nesse vetor" << endl;
    }
    
    return 0;
}
