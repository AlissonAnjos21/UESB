#include <iostream>

using namespace std;

int main() {

    int cardNumber;
    float balance;
    float spent;
    float paid;
    float cardLimit;

    cout << "Informe o número do cartão: " << endl;
    cin >> cardNumber;
    cout << "Informe o saldo no princípio do mês: " << endl;
    cin >> balance;
    cout << "Informe o total gasto no mês: " << endl;
    cin >> spent;
    cout << "Informe o total pago no mês: " << endl;
    cin >> paid;
    cout << "Informe limite do cartão: " << endl;
    cin >> cardLimit;

    float totalLimit = cardLimit + balance;
    float totalBalance = spent - paid;

    if(totalBalance > totalLimit) {
        cout << "Excedeu o limite de seu cartão de crédito!" << endl;
    }else {
        cout << "Não excedeu o limite de seu cartão de crédito!" << endl;
    }

    system("PAUSE");
    return 0;
}
