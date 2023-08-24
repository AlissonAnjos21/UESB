#include <iostream>

using namespace std;

int par(int num){
	if(num % 2 == 0)return 1;
	return 0;
}

int main(){
	
	int num;
	cout << "Informe um numero inteiro: " << endl;
	cin >> num;
	
	if(par(num) == 1)cout << "Par"; else cout << "Impar";
	
	return 0;
}
