#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    cout << "\n" << endl;

    int antes = 1, depois = 0, resultado;
    for(int i = 0; i < n; i++){
        resultado = antes + depois;
        antes = depois;
        depois = resultado;
        cout << resultado << endl;
    }

    system("PAUSE");
    return 0;
}
