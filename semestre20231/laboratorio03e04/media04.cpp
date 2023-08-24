#include <iostream>

using namespace std;

int main(){

    float idade = 0, acumulador = 0, contador = 0, media;
    while(idade >= 0){
        cin >> idade;
        if(idade >= 0){
            acumulador += idade;
            contador++;
        }else{
            media = acumulador / contador;
            cout << media << endl;
        }
    }
    system("PAUSE");
    return 0;
}
