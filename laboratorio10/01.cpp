#include <iostream>

using namespace std;

int soma(int num1, int num2){
    return num1 + num2;
}

float soma(int num1, float num2){
    return num1 + num2;
}

int soma(int num1, int num2, int num3){
    return num1 + num2 + num3;
}

int main(){
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    float num1float = 21.21;

    cout << soma(num1, num2) << endl;
    cout << soma(num1, num1float) << endl;
    cout << soma(num1, num2, num3) << endl;

    return 0;
}
