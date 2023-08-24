#include <iostream>

using namespace std;

int main(){

    int A[10], B[10], C[10];
    for(int i = 0; i < 20; i++){
        if(i < 10){
            cout << "Informe os valores para o vetor A:" << endl;
            cin >> A[i];
        }else{
            cout << "Informe os valores para o vetor B:" << endl;
            cin >> B[i-10];
        }
    }

    for(int i = 0; i < 10; i++){
        if(A[i] > B[i]){
            C[i] = 1;
        }else if(A[i] == B[i]){
            C[i] = 0;
        }else{
            C[i] = -1;
        }
    }

    cout << "\nVetor A:" << endl;
    for(int i = 0; i < 10; i++){
        cout << A[i] << endl;
    }

    cout << "\nVetor B:" << endl;
    for(int i = 0; i < 10; i++){
        cout << B[i] << endl;
    }

    cout << "\nVetor C:" << endl;
    for(int i = 0; i < 10; i++){
        cout << C[i] << endl;
    }

    return 0;
}
