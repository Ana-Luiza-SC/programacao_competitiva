#include <bits/stdc++.h>

using namespace std;


int main(){

    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int seg, min, hour;

    seg = n%60;
    hour = n /3600;
    min = (n/60) - (hour*60);

    cout << hour << ":" << min << ":" << seg << "\n";

    return 0;
}