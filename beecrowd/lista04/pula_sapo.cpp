#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int n, p;
    
    cin >> p >> n;

    int anterior, valor;

    cin >> anterior;
    for(int i = 1; i < n; i ++){
        cin >> valor;
        if(  anterior < valor && (valor - anterior) > p){
            //cout << "saindo com o antecessor: " << anterior << " e o valor mesmo: " << valor << "\n";
            cout << "GAME OVER\n";
            return 0;            
        }
        if(  anterior > valor && (anterior - valor) > p){
            //cout << "saindo com o antecessor: " << anterior << " e o valor mesmo: " << valor << "\n";
            cout << "GAME OVER\n";
            return 0;            
        }
        anterior = valor;
    }
    cout << "YOU WIN\n";    

    return 0;
}