#include <bits/stdc++.h>

using namespace std;


double roundToDecimalPlaces(double value, int decimalPlaces) {
    const double multiplier = std::pow(10.0, decimalPlaces);
    return std::round(value * multiplier) / multiplier;
}

int main(){

    ios::sync_with_stdio(false);

    float a, b, c;
    cin >> a >> b >> c;

    b /= a;
    b-= c;
    b = roundToDecimalPlaces(b, 1);
    cout << b << "\n";


}