#include <iostream>

using namespace std;

void regressiva(int n){
	if(n == 0){
		cout << 0 << endl;
	}else{
		cout << n << endl;
		regressiva(n - 1);
	}
}

int main() {

	int n;
	cout << "Informe um inteiro positivo para realizar a contagem regressiva: " << endl;
	cin >> n;
	regressiva(n);

	return 0;
}
