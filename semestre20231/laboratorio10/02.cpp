#include <iostream>

using namespace std;

template <class T>
void multiplos(T& soma, T x, int n){
    soma = 1;
    for(int i = 1; i <= n; i++){
        soma+= i*x;
    }
}

int main() {

    int soma1, x1 = 2, n1 = 10, n2 = 15;
    float soma2, x2 = 3.5;

    multiplos(soma1, x1, n1);
    multiplos(soma2, x2, n2);

    cout << "Resultado de multiplos 1: " << soma1 << endl;
    cout << "Resultado de multiplos 2: " << soma2 << endl;

    return 0;
}
