#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int n, pa, pb;
    float ta, tb;
    cin >> n;

    while(n --){
        cin >> pa >> pb >> ta >> tb;
        int controle = 0;

        ta/=100;
        tb/=100;

        while(controle <= 100 && pa <= pb){
            pa += pa*ta;
            pb += pb*tb;
            controle++;
        }


        if( controle > 100){
            cout << "Mais de 1 seculo.\n";
            continue;
        }
        cout << controle << " anos.\n";
    }


    return 0;
}