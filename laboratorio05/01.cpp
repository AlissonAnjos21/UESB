#include <iostream>

using namespace std;

int main() {
	
	int i, n, cont = 0, div, rest, result;
	cout << "Informe um i:" << endl;
	cin >> i;
	
	do{
		
		n = 3 * i + 2;
		div = cont / 3;
		rest = cont % 3;
		result = div + rest;
		
		cont++;
	}while(result != n);
	
	cout << "n: " << result << endl;
	
	
	system("PAUSE");
	return 0;
}
