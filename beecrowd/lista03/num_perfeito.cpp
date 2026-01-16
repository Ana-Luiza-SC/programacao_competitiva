#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int casos; cin >> casos;

    int num, soma;

    while(casos--){
        cin >> num;
        soma = 0;
        for(int i = 1; (i < num) && (soma <= num); i ++){
            if(num % i == 0)
                soma += i;
        }

        //cout << soma << " e o numero: " << num << "\n";
        if( soma == num) cout << num << " eh perfeito\n";
        else cout << num << " nao eh perfeito\n";
    }


    return 0;
}