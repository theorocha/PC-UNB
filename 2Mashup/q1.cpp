#include<bits/stdc++.h>
#include <string>
#include <vector>
#include <math.h>
 
typedef long long ll;
 
 
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n;
    cin >> n;
    bool achou = false;
 
    // analise = cbrt(n);
    // double aux = floor(analise);
 
    // if(analise ==  aux){
    //     cout << analise;
    // }else{
    //     cout << "-1";
    // }
 
    for(ll i = 0; i < 10000000;i++){
        if(i*i*i == n){
            cout << i;
            achou = true;
        }
    }
 
    if(!achou){
        cout << "-1";
    }
 
 
    return 0;
 
}