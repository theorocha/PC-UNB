#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
 
    int n;
    int temp = 0;
    cin >> n;
    int nn = n;
 
 
    bool achou = false;
 
    nn++;
    while(!achou){
 
        bool num[10] = {false};
        bool perfeito = true;
 
        temp = nn;
        string numero = to_string(nn);
        int tamanho = numero.size();
        
        while(tamanho--){
            if(num[temp%10] == true){
                perfeito = false;
            }else{
                num[temp%10] = true;
                
            }
            temp /= 10;
        }
        if(perfeito == true){
            cout << nn;
            achou = true;
        }else{
            nn++;
        }
    }
    
 
 
    return 0;
}