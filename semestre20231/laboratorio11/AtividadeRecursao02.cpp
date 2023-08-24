#include <iostream>

using namespace std;

int multiplicacao(int n1, int n2){
	if(n2 == 1){
		return n1;
	}
	if(n1 == 0 || n2 == 0){
		return 0;
	}
	return n1 + multiplicacao(n1, n2-1);
}

int main() {

	int n1, n2;
	cout << "Informe um inteiro positivo para realizar a multiplicacao: " << endl;
	cin >> n1;
	cout << "Informe outro inteiro positivo para realizar a multiplicacao: " << endl;
	cin >> n2;

	cout << "Multiplicacao " << n1 << " * " << n2 <<": " << multiplicacao(n1, n2) << endl;

	return 0;
}
