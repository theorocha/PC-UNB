#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <functional>


#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
typedef long long ll;
using namespace std;


int main() { _
    
    int n; cin >> n;

    while(n--){
        int qtd; cin >> qtd;
        ll ans = 0;
        set<int, greater<int>> myset;
        while(qtd--){
            int aux; cin >> aux;
            if(!(aux%2))
                myset.insert(aux);
        }

        // for(const auto& it : myset){
        //     cout << it << endl;
        // }



        while(!myset.empty()){
            int meuaux = *myset.begin();
            meuaux /= 2;
            myset.erase(myset.begin());
            if(!(meuaux%2))
                myset.insert(meuaux);
            ans++;
        }
        
        cout << ans << endl;

    }

    
    return 0;
}