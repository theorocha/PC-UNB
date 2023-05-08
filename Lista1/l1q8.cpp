
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long n, x_x, y_x;
    long long indice, indice_resposta, ptr, resposta;
    indice = 0;
    indice_resposta = 0;
    ptr = 0;
    resposta = 0;
    cin >> n >> x_x >> y_x;
 
    while(n--){
        indice++;
        int xr, yr, pr;
        cin >> xr >> yr >> pr;
        ptr = (abs(x_x - xr) + abs(y_x - yr)) * 2 + pr;
        if(indice == 1){
            indice_resposta = 1;
            resposta = ptr;
        }else{
            if(ptr < resposta){
                resposta = ptr;
                indice_resposta = indice;
            }
        }  
    }
 
    cout << resposta << " " << indice_resposta;
    
    return 0;
}