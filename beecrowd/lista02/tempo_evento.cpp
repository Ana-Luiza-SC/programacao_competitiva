#include <bits/stdc++.h>

using namespace std;

int main(){

   ios::sync_with_stdio(false);

    int dias[2];
    int hor[2];
    int min[2];
    int seg[2];

    string descarta;

    // para o primeiro dia
    cin >> descarta >> dias[0]; 
    cin >> hor[0] >> descarta >> min[0] >> descarta >> seg[0] ;

    // para o segundo dia
    cin >> descarta >> dias[1]; 
    cin >> hor[1] >> descarta >> min[1] >> descarta >> seg[1] ;

//cout << "DIAS = " << dias[0] << " " <<  dias[1] << "\n"; 

    int segfinal, minfinal, horfinal, diafinal;

    segfinal = seg[1] - seg[0];
    if(segfinal < 0){
        min[1] --;
        segfinal+=60;
    } 
    
    minfinal = min[1] - min[0];

    if(minfinal < 0){
        hor[1]--;
        minfinal+= 60;
    }

    horfinal = hor[1] - hor[0];

    if(horfinal< 0){
        dias[1]--;
        horfinal+= 24;
    }

    diafinal = dias[1] - dias[0];  

    cout << diafinal <<" dia(s)\n";
    cout << horfinal <<" hora(s)\n";
    cout << minfinal <<" minuto(s)\n";
    cout << segfinal <<" segundo(s)\n";

    return 0;
}