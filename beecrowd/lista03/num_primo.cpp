#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int casos; cin >> casos;

    int num, soma;

    while(casos--){
        cin >> num;
        soma = 0;
        for(int i = 1; (i < num) && (soma < 2); i ++){
            if(num % i == 0)
                soma ++;
        }

        //cout << soma << " e o numero: " << num << "\n";
        if( soma == 1) cout << num << " eh primo\n";
        else cout << num << " nao eh primo\n";
    }


    return 0;
}