#include <iostream>

using namespace std;

int main() {

	float acumulador = 0, ha, valor;
	int tipo;

	cout << "Informe o tipo de pulverizacao: " << endl;
	cin >> tipo;

	while(tipo >= 1 && tipo <= 5){
		cout << "Informe a quantidade de hectares: " << endl;
		cin >> ha;

		switch(tipo){
			case 1:
				valor = 500 * ha;
			break;
			case 2:
				valor = 1000 * ha;
			break;
			case 3:
				valor = 1500 * ha;
			break;
			case 4:
				valor = 2000 * ha;
			break;
			case 5:
				valor = 3000 * ha;
			break;
		}

		if(ha > 100){valor *= 0.95;}
		if(valor > 75000){valor -= (valor - 75000) * 0.1;}

		acumulador += valor;

		cout << "Informe um tipo valido para continuar ou um tipo invalido para finalizar: " << endl;
		cin >> tipo;
	}

	cout << "Valor total: " << acumulador << endl;

	system("PAUSE");
	return 0;
}
