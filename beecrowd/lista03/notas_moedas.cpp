// #include <bits/stdc++.h>

// using namespace std;

// int main(){

//     ios::sync_with_stdio(false);

//     float valor; cin >> valor;

//     int nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0;

//     while(valor >= 100){
//         nota100 ++;
//         valor -=100;
//     }

//     while(valor >= 50){
//         nota50 ++;
//         valor -= 50;
//     }
    
//     while(valor >= 20){
//         nota20 ++;
//         valor -=20;
//     }
    
//     while(valor >= 10){
//         nota10 ++;
//         valor -=10;
//     }
    
//     while(valor >= 5){
//         nota5 ++;
//         valor -=5;
//     }
    
//     while(valor >= 2){
//         nota2 ++;
//         valor -=2;
//     }


//     int moeda1 = 0, moeda050 = 0, moeda025 = 0, moeda010 = 0, moeda005 = 0, moeda001 = 0;
    

//     valor *=100;

//     while(valor >= 100){
//         valor -= 100;
//         moeda1++;
//     }

//     while(valor >= 50){
//         valor -= 50;
//         moeda050 ++;
//     }

//     while(valor >= 25){
//         valor -= 25;
//         moeda025++;
//     }
//     while(valor >= 10){
//         valor -= 10;
//         moeda010++;
//     }
    
//     while(valor >= 5){
//         valor -= 5;
//         moeda005++;
//     }

//     while(valor >=1){
//         valor -= 1;
//         moeda001 ++;
//     }
    
// //    cout << valor << "\n";


//     cout << "NOTAS:\n";
//     cout << nota100 << " nota(s) de R$ 100.00\n";
//     cout << nota50 << " nota(s) de R$ 50.00\n";
//     cout << nota20 << " nota(s) de R$ 20.00\n";
//     cout << nota10 << " nota(s) de R$ 10.00\n";
//     cout << nota5 << " nota(s) de R$ 5.00\n";
//     cout << nota2 << " nota(s) de R$ 2.00\n";

//     cout << "MOEDAS:\n";

//     cout << moeda1 << " moeda(s) de R$ 1.00\n";
//     cout << moeda050 << " moeda(s) de R$ 0.50\n";
//     cout << moeda025 << " moeda(s) de R$ 0.25\n";
//     cout << moeda010 << " moeda(s) de R$ 0.10\n";
//     cout << moeda005 << " moeda(s) de R$ 0.05\n";
//     cout << moeda001 << " moeda(s) de R$ 0.01\n";

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    double valor; cin >> valor;
    
    // Converte para centavos (inteiro) para evitar erros de precisão
    int centavos = (int)(valor * 100 + 0.5);

    int nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0;

    nota100 = centavos / 10000;
    centavos %= 10000;
    
    nota50 = centavos / 5000;
    centavos %= 5000;
    
    nota20 = centavos / 2000;
    centavos %= 2000;
    
    nota10 = centavos / 1000;
    centavos %= 1000;
    
    nota5 = centavos / 500;
    centavos %= 500;
    
    nota2 = centavos / 200;
    centavos %= 200;

    int moeda1 = 0, moeda050 = 0, moeda025 = 0, moeda010 = 0, moeda005 = 0, moeda001 = 0;
    
    moeda1 = centavos / 100;
    centavos %= 100;
    
    moeda050 = centavos / 50;
    centavos %= 50;
    
    moeda025 = centavos / 25;
    centavos %= 25;
    
    moeda010 = centavos / 10;
    centavos %= 10;
    
    moeda005 = centavos / 5;
    centavos %= 5;
    
    moeda001 = centavos;

    cout << "NOTAS:\n";
    cout << nota100 << " nota(s) de R$ 100.00\n";
    cout << nota50 << " nota(s) de R$ 50.00\n";
    cout << nota20 << " nota(s) de R$ 20.00\n";
    cout << nota10 << " nota(s) de R$ 10.00\n";
    cout << nota5 << " nota(s) de R$ 5.00\n";
    cout << nota2 << " nota(s) de R$ 2.00\n";

    cout << "MOEDAS:\n";

    cout << moeda1 << " moeda(s) de R$ 1.00\n";
    cout << moeda050 << " moeda(s) de R$ 0.50\n";
    cout << moeda025 << " moeda(s) de R$ 0.25\n";
    cout << moeda010 << " moeda(s) de R$ 0.10\n";
    cout << moeda005 << " moeda(s) de R$ 0.05\n";
    cout << moeda001 << " moeda(s) de R$ 0.01\n";

    return 0;
}
// }