#include <bits/stdc++.h>


using namespace std;


int main(){

    ios::sync_with_stdio(false);

    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(5);

    double delta, raiz1, raiz2;

    delta = b*b - 4*a*c;

    if(delta < 0 || a == 0){
        cout << "Impossivel calcular\n";
        return 0;
    }

    a*=2;

    raiz1 =( -b + sqrt(delta))/a;
    raiz2 =( -b - sqrt(delta))/a;

    cout << "R1 = " << raiz1 << "\n";
    cout << "R2 = " << raiz2 << "\n";



    return 0;
}