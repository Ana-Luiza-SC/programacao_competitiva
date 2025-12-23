#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int x, y;

    while(cin >> x >> y && x != y){
        if( x < y)
            cout << "Crescente\n";
        else
            cout << "Decrescente\n";
    }


    return 0;
}