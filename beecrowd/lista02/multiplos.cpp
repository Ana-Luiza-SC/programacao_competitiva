#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    cout << (a%b) << "\n";
    if(b%a == 0 || a%b == 0){
        cout << "Sao Multiplos\n";
    }
    else cout << "Nao sao Multiplos\n";

    return 0;
}