#include <iostream>

using namespace std;

int contador(int num){
	for(int i = 1; i <= 1000000000; i++){
		if(i == num) return i;
	}
	return 0;
}

int main(){
	int num;
	cout << "Digite um numero: " << endl;
	cin >> num;
	
	cout << "Voce digitou... " << contador(num) << endl;
	
	return 0;
}
