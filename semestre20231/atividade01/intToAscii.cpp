#include <iostream>

using namespace std;

int main() {
    char character;
    cout << "Informe um caractere:" << endl;
    cin >> character;

    cout << "O inteiro correspondente na tabela ASCII: " << int(character) << endl;

    system("PAUSE");
    return 0;
}
