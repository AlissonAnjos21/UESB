#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int gerador(int num){
    srand(time(0));
    return rand() % (num+1);
}

int main(){

    int num;
    cout << "Informe um numero inteiro: " << endl;
    cin >> num;

    cout << "O valor obtido foi: " << gerador(num) << endl;
    return 0;
}
