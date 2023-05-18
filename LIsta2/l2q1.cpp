#include <bits/stdc++.h>
#include <string>
#include <stack>
#include <queue>
typedef long long ll;
 
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    queue<char> fila;
    string p;
    cin >> p;
    ll ans = 0, aux = 0;
 
    for(char c: p){
        fila.push(c);
    }
 
    while(!fila.empty()){
        aux = 0;
        if(!fila.empty() and fila.front() != 'r'){
            fila.pop();
        }else{
            fila.pop();
            while(!fila.empty() and fila.front() == '.'){
                aux++;
                fila.pop();
            }
            if(!fila.empty() and fila.front() != 's'){
                ans += aux;
            }
            else if(fila.empty()){
                ans += aux;
            }
        }
    } 
 
    cout << ans;
 
 
    
    return 0;
}