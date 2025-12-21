#include <bits/stdc++.h>

using namespace std;

int main(){

    double R, volume;

    cin >> R;
    volume = (4/3.0) * 3.14159 * R*R*R;

    cout << fixed << setprecision(3);

    cout << "VOLUME = " << volume << "\n";

    return 0;
}