#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int paginas;
    cin >> paginas;
    vector<char> num_romanos;

    if(paginas >= 900 ) {
        num_romanos.push_back('C');
        num_romanos.push_back('M');
        paginas -=900;
    }
    
    while(paginas >= 500){
        num_romanos.push_back('D');
        paginas -=500;
    }

    if(paginas >= 400){
        num_romanos.push_back('C');
        num_romanos.push_back('D');
        paginas -=400;
    }

    while(paginas >= 100){
        num_romanos.push_back('C');
        paginas -=100;
    }

    if(paginas >= 90){
        num_romanos.push_back('X');
        num_romanos.push_back('C');
        paginas -=90;
    }

    while(paginas >= 50){
        num_romanos.push_back('L');
        paginas -=50;
    }

    if(paginas >= 40){
        num_romanos.push_back('X');
        num_romanos.push_back('L');
        paginas -=40;
    }

    while(paginas >= 10){
        num_romanos.push_back('X');
        paginas -=10;
    }
    
    // cout << "antes do 9 esta acima\n"
    if(paginas >= 9){
        num_romanos.push_back('I');
        num_romanos.push_back('X');
        paginas -=9;
    }

    while(paginas >= 5){
        num_romanos.push_back('V');
        paginas -=5;
    }

    if(paginas >= 4){
        num_romanos.push_back('I');
        num_romanos.push_back('V');
        paginas -=4;
    }

    while(paginas >= 1){
        num_romanos.push_back('I');
        paginas -=1;
    }


    for(int i = 0; i < num_romanos.size(); i ++){
        cout << num_romanos[i];
    }
    cout << "\n";
    


    return 0;
}