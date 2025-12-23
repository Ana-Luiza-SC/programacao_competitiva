#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int n, k = 0, x;
    cin >> n;

    for(int i = 0; i < n; i ++ ){
        cin >> x;
        if(x >= 10 && x <= 20) k ++;
    }

    cout << k << " in\n";
    cout << (n - k) << " out\n";

    return 0;
}