#include <iostream>
#include <cmath>

using namespace std;

int quantasAparecem(int n, int d){
    int qtdDig = 0, sentinela = n, novoN = n, novoD = 0, qtdAparece = 0;
    do{
        sentinela /= 10;
        qtdDig++;
    }while(sentinela != 0);

    novoD = round(pow(10, (qtdDig - 1))) * d;
    for(int i = novoD; i > 0; i /= 10){
        if((novoN / i) == 1) qtdAparece++;
        novoN %= i;
    }
    return qtdAparece;
}

int main(){

	int n, d;
	cout << "Infome um numero inteiro possitivo: " << endl;
	cin >> n;
	cout << "Informe um digito desse numero: " << endl;
	cin >> d;

	cout << "O digito " << d << " aparece " << quantasAparecem(n, d) << " vez(es) no numero " << n << endl;

	return 0;
}
