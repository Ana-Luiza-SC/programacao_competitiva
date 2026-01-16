#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    float a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(1);

    if( (a+b) > c && (c+b) > a && (a+c) > b ){
        cout << "Perimetro = " << (a+b+c) << "\n";
    }
    else{
        cout << "Area = " << (a+b)*c/2 << "\n";
    }

    return 0;
}