#include <iostream>

using namespace std;

bool multiCinco(int num){
	if(num % 5 == 0)return true;
	return false;
}

int main(){
	
	int num;
	cout << "Informe um numero inteiro: " << endl;
	cin >> num;
	
	if(multiCinco(num) == 1)cout << "Multiplo de 5"; else cout << "NAO multiplo de 5";
	
	return 0;
}
