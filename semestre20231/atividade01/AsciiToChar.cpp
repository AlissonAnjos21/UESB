#include <iostream>

using namespace std;

int main() {
	int value;
	cout << "Informe um valor inteiro: " << endl;
	cin >> value;

	cout << "O caracter correspondente na tabela ASCII: " << char(value) << endl;

	system("PAUSE");
	return 0;
}
