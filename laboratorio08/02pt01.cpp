#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int gerador(int m, int n){
    srand(time(0));

    int random;
    do{
        random = rand() % (n+1);
    }while(random < m);
    return random;
}

int main(){

    int m, n;
    cout << "Informe um numero inteiro: " << endl;
    cin >> m;
    cout << "Informe outro numero inteiro: " << endl;
    cin >> n;

    cout << "O valor obtido foi: " << gerador(m, n) << endl;
    return 0;
}
