#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int gera(int n = 15){
    srand(time(0));
    return rand() % (n+1);
}

int main(){

    int m = 0;
    while(m != -1){

        cout << "Informe qualquer valor positivo para continuar e -1 para parar: " << endl;
        cin >> m;

        if(m > -1){
            cout << "Chamando gera sem argumento: " << gera() << endl;
            cout << "Chamando gera com o argumento " << m << ": " << gera(m) << endl;
        }
    }
    return 0;
}
