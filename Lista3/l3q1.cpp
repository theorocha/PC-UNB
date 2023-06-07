#include <bits/stdc++.h>
 
typedef long long int ll;
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n, t, c, ans = 0, aux = 0;
    bool entrou = false;
 
    cin >> n >> t >> c;
 
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(x <= t){
            aux++;
        }else{
            entrou = true;
            if(aux >= c){
                ans += aux - c + 1;
            }
            aux = 0;
        }
    }
    
    if(aux >= c)
        ans += aux - c + 1;
 
    
    entrou? cout << ans : cout << n - c + 1;
    
    return 0;
}