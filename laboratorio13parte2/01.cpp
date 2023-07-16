#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int pesquisaLinear(int v[500], int chave){
    for(int i = 0; i < 500; i++){
        if(v[i] == chave){
            return i;
        }
    }
    return -1;
}

int main(){
    
    int v[500];
    srand(time(0));
    
    for(int i = 0; i < 500; i++){
        v[i] = rand();
    }
    
    int chave = 21; //Qualque valor inteiro
    int resultado = pesquisaLinear(v, chave);
    
    if(resultado >= 0){
        cout << "A posicao desse valor e: " << resultado << endl;
    }else{
        cout << "Esse valor nao existe o arranjo" << endl;
    }
    
    return 0;
}
