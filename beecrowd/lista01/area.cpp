#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    double a, b, c; 
    cin >> a >> b >> c;

    double atri, acir,atra, aqua, aret;
    
    atri = a*c/2;
    atra = (a+b)*c/2;
    acir = 3.14159 *c*c;
    aqua = b*b;
    aret = b*a;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << atri << "\n";
    cout << "CIRCULO: " << acir << "\n";
    cout << "TRAPEZIO: " << atra << "\n";
    cout << "QUADRADO: " << aqua << "\n";
    cout << "RETANGULO: " << aret << "\n";

    return 0;
}