#include <iostream>

using namespace std;

int potencia(int i, int j){
	if(j == 1){
		return i;
	}

	if(i != 0 and j == 0){
		return 1;
	}

	if(i == 0 and j == 0){
		cout << "Indeterminacao!" << endl;
	}

	return i * potencia(i, (j-1));

}

int main() {

	cout << potencia(21, 2) << endl;

	return 0;
}
