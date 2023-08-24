#include <iostream>

using namespace std;

void bubbleSort(int v[10]){
    int suporte;
    for(int i = 0; i < (10 - 1); i++){
        for(int j = 0; j < (10 - 1); j++){
            if(v[j] > v[j+1]){
                suporte = v[j+1];
                v[j+1] = v[j];
                v[j] = suporte;
            }
        }
    }
}

int main(){
    
    int v[10] = {12, 9, 1, 4, 21, 42, 5, 100, 71, 0};
    
    bubbleSort(v);
    
    for(int i = 0; i < 10; i++){
        cout << v[i] << endl;
    }
    
    return 0;
}
