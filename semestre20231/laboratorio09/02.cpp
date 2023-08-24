#include <iostream>

using namespace std;

void razaoPorDez(int num1, int num2, float& result1, float& result2){
    result1 = num1 / 10.0;
    result2 = num2 / 10.0;
}

int main(){

    int num1, num2;
    float result1, result2;
    cout << "Informe o primeiro numero: " << endl;
    cin >> num1;
    cout << "Informe o segundo numero: " << endl;
    cin >> num2;

    razaoPorDez(num1, num2, result1, result2);
    cout << num1 << "/10 = " << result1 << endl;
    cout << num2 << "/10 = " << result2 << endl;

    return 0;
}
