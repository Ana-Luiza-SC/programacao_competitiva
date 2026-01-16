#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    stack<char> a;
    char b;

    while(cin >> b) a.push(b);
    
    while(not a.empty()){
        b = a.top();
        a.pop();
        cout << b ;
    }
    cout << "\n";


    return 0;
}