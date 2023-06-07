#include<bits/stdc++.h>
#include <string>
#include <vector>
#include <math.h>
#include <stack>
#include <queue>
 
typedef long long ll;
 
 
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    stack<ll> presente;
    stack<ll> fila_aux;
    queue<ll> cidade;
 
    ll n,m,d;
    ll ans = 1;
 
    cin >> n >> m >> d;
 
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        cidade.push(x);
    }
 
 
    for(int i = 0; i < m; i++){
        ll x;
        cin >> x;
        presente.push(x);
    }
 
    while(!presente.empty()){
        bool achou = false;
        ll aux = d;
        while(aux-- and !achou){
            if(presente.top() == cidade.front()){
                presente.pop();
                cidade.pop();
                achou = true;
            }else{
                cidade.push(cidade.front());
                cidade.pop();
                fila_aux.push(presente.top());
                presente.pop();
            }
        }
        while(!fila_aux.empty()){
            presente.push(fila_aux.top());
            fila_aux.pop();
        }
        
        if(!achou){
            ans++;
        }
        }
 
    cout << ans;
 
 
    return 0;
 
}