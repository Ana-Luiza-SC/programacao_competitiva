#include <bits/stdc++.h>

using namespace std;


int main(){

    ios::sync_with_stdio(false);

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >>  y2;

    double x, y, dist;

    x = x2-x1;
    x*=x;
    y = y2 - y1;
    y*= y;

    dist = x +y;
    dist = sqrt(dist);

    cout << fixed << setprecision(4);
    cout << dist << "\n";


    return 0;
}