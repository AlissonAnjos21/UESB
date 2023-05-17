#include <iostream>

using namespace std;

int main() {

	int clientes, qtdProdutos = 0;
	float preco = 0, acumGeral = 0, acumPessoal = 0, mediaGeral, mediaPessoal;

	cout << "Informe a quantidade de clientes: " << endl;
	cin >> clientes;

	for(int i = 0; i < clientes; i++){
		while(preco >= 0){
			cout << "Informe o preco do produto: " << endl;
			cin >> preco;
			if(preco >= 0){
				acumPessoal+=preco;
				qtdProdutos++;
			}
		}

		mediaPessoal = acumPessoal / qtdProdutos;
		cout << "A media do cliente " << i+1 << ": "<< mediaPessoal << endl;;

		acumGeral += acumPessoal;
		acumPessoal = 0;
		preco = 0;
		qtdProdutos = 0;
	}

	mediaGeral = acumGeral / clientes;
	cout << "\nA media geral sera: " << mediaGeral << endl;

	system("PAUSE");
	return 0;
}
