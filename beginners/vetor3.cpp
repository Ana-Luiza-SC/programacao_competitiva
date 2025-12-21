#include <bits/stdc++.h>

using namespace std;


int main(){

    ios::sync_with_stdio(false);

    vector<int> impar;
    int n, x;
    cin >> n;

    while(n--){
        cin >> x;
        if( x%2 == 0) cout << x << " ";
        else impar.push_back(x); 
    }

    cout << "\n";
    
    for(auto x : impar){
        cout << x << " ";
    }
    cout << "\n";



}