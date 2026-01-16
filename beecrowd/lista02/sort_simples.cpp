#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);


    int a, b, c;
    vector<int> ordenado;

    cin >> a;
    ordenado.push_back(a);


    cin >> b;
    ordenado.push_back(b);


    cin >> c;
    ordenado.push_back(c);

    sort(ordenado.begin(), ordenado.end());

    for(auto i : ordenado){
        cout << i << "\n";
    }

    cout <<"\n";

    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";

    return 0;
}