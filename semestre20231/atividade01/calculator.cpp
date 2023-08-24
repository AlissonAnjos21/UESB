#include <iostream>

using namespace std;

int main() {

    float num1;
    float num2;
    char operation;

    cout << "Informe um número: "<< endl;
    cin >> num1;
    cout << "Informe um outro número: "<< endl;
    cin >> num2;
    cout << "Informe o sinal de uma operação: "<< endl;
    cin >> operation;

    if(operation == '+') {
        cout << num1 + num2 << endl;
    }else if(operation == '-') {
        cout << num1 - num2 << endl;
    }else if(operation == '*') {
        cout << num1 * num2 << endl;
    }else if(operation == '/'){
        cout << num1 / num2 << endl;
    }else {
        cout << "Erro!!!" << endl;
    }

    system("PAUSE");
    return 0;
}
