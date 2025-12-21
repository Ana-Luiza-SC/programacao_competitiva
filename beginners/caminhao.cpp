#include <bits/stdc++.h>

using namespace std;


int main(){

    ios::sync_with_stdio(false);

    int n,x, sum = 0;
    cin >> n;

    while(n--){
        cin >> x;
        sum += x;
    }

    cout << "Carga total: " << sum << " kilogramas\n";
    return 0;

}