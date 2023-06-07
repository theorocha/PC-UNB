#include<bits/stdc++.h>
#include <string>
#include <vector>
#include <math.h>
#include <queue>
 
typedef long long ll;
 
 
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    queue<ll> roda;
    vector<ll> qtd;
 
    int n,k;
    cin >> n >> k;
 
    for(int i = 1; i < n + 1;i++){
        roda.push(i);
    }
 
    for(ll i = 0; i < k; i++){
        ll x, aux = 0;
        cin >> x;
        aux = x % roda.size();
        while(aux--){
            roda.push(roda.front());
            roda.pop();
        }
        cout << roda.front() << " ";
        roda.pop();
    }
 
    return 0;
 
}