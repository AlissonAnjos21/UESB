#include <iostream>

using namespace std;

void progressiva(int n){
	if(n == 0){
		cout << n << endl;
	}else{
		progressiva(n-1);
		cout << n << endl;
	}
}

int main() {

	int n;
	cout << "Informe um inteiro positivo para realizar a contagem progressiva: " << endl;
	cin >> n;
	progressiva(n);

	return 0;
}
