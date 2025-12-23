#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int x, y;
    // k começa no 0
    long long k = 0;

    cin >> x >> y;

    if (  x > y) swap(x, y);

    // vou do valor x até o y, incluindo ele e incrementando 1 a 1
    for(; x <= y; x ++){
        // se n for divisivel por 13 eu somo no k
        if(x%13 != 0) k += x;
    }

    cout << k << "\n";

    return 0;
}