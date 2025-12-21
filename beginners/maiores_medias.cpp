#include <bits/stdc++.h>

using namespace std;


long long main(){

    long long n, x, media=0;
    cin >> n;
    vector<long long> valores;

    for(long long i = 0; i < n; i++){
        cin >> x;
        valores.push_back(x);
        media+= x;
    }

    media /= n;

    bool primeiro = true;
    
    for(long long i=0; i<n; i++){
        if(valores[i] > media){
            if(!primeiro) cout << " ";
            cout << valores[i];
            primeiro = false;
        }
    }
    if(primeiro){
        cout << 0;
    }
    cout << "\n";

    return 0;
}