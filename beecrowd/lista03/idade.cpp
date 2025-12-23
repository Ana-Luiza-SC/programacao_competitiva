#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int  x = 0, k;
    double media=0;

    cout << fixed << setprecision(2);

    while(cin >> k && k > 0){
        x ++;
        media += k;
    }
    
    cout << media/x << "\n";

    return 0;
}