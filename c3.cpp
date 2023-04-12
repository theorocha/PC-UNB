#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string dna;
    cin >> dna;
    int cont = 1;
    int resultado = 0;
    

    for(int i = 0; i < dna.size(); i ++){
        if(dna[i] == dna[i+1]){
            cont++;
        }
        else{
            if(cont > resultado){
                resultado = cont;
            }
            cont = 1;
        }
    }

    cout << resultado << endl;

    return 0;
}