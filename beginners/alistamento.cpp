#include <bits/stdc++.h>

using namespace std;


int main(){

    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    if(n < 16) {
        cout << "Nao pode se alistar\n";
    }
    else if( n < 18 || n > 70){
        cout << "Alistamento facultativo\n" ;
    }
    else{
        cout << "Alistamento obrigatorio\n";
    }

    return 0;

}