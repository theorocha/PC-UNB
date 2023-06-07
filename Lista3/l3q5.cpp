#include <bits/stdc++.h>
#include <vector>
 
typedef long long int ll;
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, k1,k2, aux, aux2;
 
    cin >> n >> k1 >> k2;
    aux = n;
 
    vector<ll> v1;
    vector<ll> v2;
    set<pair<ll,pair<ll,ll>>> set;
 
    while(n--){
        ll x;
        cin >> x;
        v1.push_back(x);
    }
 
    for(int i = 0; i < aux; i++){
        ll x;
        cin >> x;
        v2.push_back(x);
        set.insert({abs(v1.at(i) - x), {v1.at(i),x}});
    }
 
    ll sup = k1+k2;
    ll qtd_k1, qtd_k2 = {0};
 
    ll ans = 0;
    for(auto it = set.begin(); it != set.end();++it){
        ll va = it -> second.first;
        ll vb = it -> second.second;
        ans += (va-vb) * (va-vb);
    }
 
 
    cout << ans;
 
    return 0;
}
