#include <bits/stdc++.h>

using namespace std;

unsigned int fibonacci(unsigned int a){
    if(a == 1 || a == 0) return a;
    return fibonacci(a-1) + fibonacci(a-2);
}


int main(){

    ios::sync_with_stdio(false);

    unsigned int a, n;
    cin >> n;

    while(n--){
        cin >> a;
        cout << "Fib(" << a << ") = " << fibonacci(a) << "\n"; 
    }

    return 0;
}