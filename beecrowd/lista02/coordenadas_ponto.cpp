#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    float x, y;
    cin >> x >> y;

    if( x == 0 ){
        if(y == 0) cout << "Origem\n";
        else cout << "Eixo Y\n";
    }
  
    else if (y == 0){
        cout << "Eixo X\n";
    }

    else if( x > 0){
        if( y > 0 ) cout << "Q1\n";
        else cout << "Q4\n";
    }
    else{
        if( y > 0) cout << "Q2\n";
        else cout << "Q3\n";
    }

    return 0;
}