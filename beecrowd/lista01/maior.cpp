#include <bits/stdc++.h>

using namespace std;

int maior(int a , int b){
    return ((a + b + abs(a-b))/2);
}

int main(){

    ios::sync_with_stdio(false);

    int a, b, c;
    cin >> a >> b >> c;

    auto resp = maior(a, b);
    resp = maior(resp, c);

    cout  << resp << " eh o maior\n";

    return 0;
}