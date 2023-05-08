#include <bits/stdc++.h>

using namespace std;


int pega_resto(int numero){
    if(numero >= 500){
        numero -= 500;
    }
    if(numero > 499){
        pega_resto(numero);
    }
    else{
        return numero;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long n,a;
    cin >> n >> a;
    unsigned int resto = pega_resto(n);

    if(resto > a){
        cout << "Nao";
    }
    else{
        cout << "Sim";
    }
    

    return 0;
}