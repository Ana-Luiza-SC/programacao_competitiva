#include <bits/stdc++.h>

using namespace std;


int main(){

    ios::sync_with_stdio(false);

    int n,x;
    cin >> n;
    vector<int> grau;

    while(n--){
        cin >> x;
        if(binary_search(grau.begin(),grau.end(), x)){
            cout << x << "\n";
            return 0;
        }
        grau.push_back(x);
        sort(grau.begin(),grau.end());
    }


}