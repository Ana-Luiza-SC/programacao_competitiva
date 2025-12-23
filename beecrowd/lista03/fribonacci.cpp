#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    vector<int> fribonacci;
    fribonacci.push_back(0);
    fribonacci.push_back(1);

    int n; cin >> n;
    int x, k = 2;

    while(fribonacci.size() < n){
        x = fribonacci[k-2] + fribonacci[k-1];
        fribonacci.push_back(x);
        k ++;  
    }

    int i = 0;
    
    for( ; i < (n-1) ; i ++){
        cout << fribonacci[i] << " ";
    }
    cout << fribonacci[i];
    cout << "\n";

    return 0;
}