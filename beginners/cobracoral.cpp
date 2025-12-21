#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int num[3], x, count = 0;

    cin >> num[0];
    cin >> num[1];
    cin >> x;

    if(x !=num[0]){
        cout << "F\n";
        return 0;
    }

    cin >> num[2];

    while(cin >> x){
        if(count % 3 == 0 ){
            if(num[0] != x){
                cout << "F\n";
            return 0;
            } 
        }
        if(count % 3 == 1 ){
            if(num[1] != x){
                cout << "F\n";
            return 0;
            } 
        }
        if(count % 3 == 2 ){
            if(num[2] != x){
                cout << "F\n";
            return 0;
            } 
        }
    }

    cout << "V\n";
    return 0;

}