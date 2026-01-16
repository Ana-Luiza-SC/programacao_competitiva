#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    double v1, v2;
    double x, y;

    cin >> v1 >> v2;
    
    x = v1*v2;
    y = x/12.0;

    cout << fixed << setprecision(3);

    cout << y << "\n";

    return 0;
}