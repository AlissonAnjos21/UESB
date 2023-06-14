#include <iostream>
using namespace std;

int razao(int num1, int num2, float& resultado){
    if(num2 == 0){
        return 0;
    }
    resultado = (num1 * 1.0) / num2;
    return 1;

}

int main(){

    int num1, num2;
    float resultado;
    cout << "Informe o dividendo: " << endl;
    cin >> num1;
    cout << "Informe o divisor: " << endl;
    cin >> num2;

    if(razao(num1, num2, resultado) == 1){
        cout << "O resultado de " << num1 << "/" << num2 << " = " << resultado << endl;
    }else{
        cout << "Divisao impossivel!" << endl;
    }

    return 0;
 }
