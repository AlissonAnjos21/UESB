#include <iostream>

using namespace std;

int main() {
    int value;
    cout << "Informe um valor inteiro positivo:" << endl;
    cin >> value;

    if(value < 0) {
        cout << "ERRO! VOCÊ DIGITOU UM VALOR NEGATIVO." << endl;
    }

    system("PAUSE");
    return 0;
}
