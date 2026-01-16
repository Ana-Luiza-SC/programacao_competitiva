#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int valor, menor, ind=0, tam;
    cin >> tam;

    cin >> menor;
    for(int i = 1; i < tam; i ++ ){
        cin >> valor;
        if(valor < menor){
            menor = valor;
            ind = i;
        }
    }

    cout << "Menor valor: " << menor << "\n";
    cout << "Posicao: " << ind << "\n";

    return 0;
}