#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    float valor;
    cin >> valor;

    cout << fixed << setprecision(2);

    if( valor >= 0 && valor <= 2000)
        cout << "Isento\n";

    else if (valor <= 3000)
        cout << "R$ " << (valor-2000)*0.08 << "\n";

    else if (valor <= 4500)
        cout << "R$ " << (1000)*0.08 + (valor - 3000)*0.18 << "\n";

    else 
        cout << "R$ " << (1000)*0.08 + (1500)*0.18  + (valor-4500)*0.28 << "\n";

    return 0;
}