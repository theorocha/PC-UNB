#include <bits/stdc++.h>
#include <set>

typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    set<ll> set;

    while(n--){
        ll t,q;
        cin >> t >> q;

        if(t == 1){
            set.insert(q);
        }else{
            set.find(q) != set.end()? cout << "Sim\n" : cout << "Nao\n";
        }

    }
    
    return 0;
}