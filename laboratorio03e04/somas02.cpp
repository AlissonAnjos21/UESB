#include <iostream>

using namespace std;

int main(){

    int m, n;

    cin >> m;
    cin >> n;

    cout << "\n" << endl;

    int acumulador = 0;
    for(int i = m+1; i < n; i++){
        acumulador += i;
    }

    cout << "Soma dos numeros: " << acumulador << endl;

    system("PAUSE");
    return 0;
}
