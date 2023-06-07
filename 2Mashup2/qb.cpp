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
 
    ll preco, qtd;
    cin >> preco >> qtd;
    stack<ll> pilha;
 
    while(qtd--){
        int op, valor;
        cin >> op >> valor;
        if(op == 1){
            pilha.push(valor);
        }else{
            while(valor--){
                pilha.pop();
            }
        }
    }
 
    while(!pilha.empty()){
        preco += pilha.top();
        pilha.pop();
    }
 
    cout << preco;
 
    return 0;
 
}