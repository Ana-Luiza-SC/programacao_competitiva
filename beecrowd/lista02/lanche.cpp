#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    float valores[] = {4, 4.5, 5, 2, 1.5};

    cout << fixed << setprecision(2);

    cout << "Total: R$ " << (valores[a-1] *b) << "\n";

    return 0;
}