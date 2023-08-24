#include <iostream>

using namespace std;

int main(){

    int turmas, alunos = 0, aprovados = 0, reprovados = 0, sucesso = 0, continua = 1;
    float nota, acumNotas = 0, acumMedias = 0, media;

    cout << "Informe a quantidade de turmas: " << endl;
    cin >> turmas;
    for(int i = 0; i < turmas; i++){
        while(continua == 1){
            for(int j = 0; j < 3; j++){
                cout << "Informe a nota " << j+1 << ":" << endl;
                cin >> nota;
                if(nota >= 7){sucesso++;}
                acumNotas += nota;
            }

            if(sucesso == 3){aprovados++;}else{reprovados++;}
            sucesso = 0;
            acumMedias += acumNotas / 3;
            acumNotas = 0;
            alunos++;

            cout << "Digite 1 para continuar\nDigite outra coisa para sair" << endl;
            cin >> continua;
        }

        media = acumMedias / alunos;
        cout << "A media da turma " << i+1 << " e: " << media << "\n" << endl;

        continua = 1;
        acumMedias = 0;
        alunos = 0;
    }

    cout << "Total de APROVADOS: " << aprovados << "\nTotal de REPROVADOS: " << reprovados << endl;

    system("PAUSE");
    return 0;
}
