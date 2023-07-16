#include <iostream>

using namespace std;

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
    
    int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    int chave = 21; //Qualque valor inteiro
    int resultado = buscaBinaria(v, chave);
    
    if(resultado > 0){
        cout << "A posicao desse valor e: " << resultado << endl;
    }else{
        cout << "Esse valor nao existe o arranjo" << endl;
    }
    
    return 0;
}
