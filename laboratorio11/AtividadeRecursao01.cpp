#include <iostream>

using namespace std;

int somatorio(int n){
	if(n == 1){
		return 1;
	}
	return n + somatorio(n-1);
}

int main() {

	int n;
	cout << "Informe um inteiro positivo para realizar o somatorio: " << endl;
	cin >> n;
	cout << "Somatorio: " << somatorio(n) << endl;

	return 0;
}
