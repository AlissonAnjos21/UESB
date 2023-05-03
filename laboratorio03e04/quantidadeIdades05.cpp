#include <iostream>

using namespace std;

int main(){

    int idade, contador = 0;
    do{
        cin >> idade;
        if((idade > 0) && (idade < 25)){
            contador++;
        }
    }while(idade > 0);

    cout << contador << " alunos possuem menos de 25 anos" << endl;

    system("PAUSE");
    return 0;
}
