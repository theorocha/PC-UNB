#include <bits/stdc++.h>
#include <queue>


typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,f,p,ans = 0,cont = -1;
    queue<int> fila;

    cin >> n >> f >> p;

    while(n--){
        ll x; 
        cin >> x;
        fila.push(x);
    }

    while(!fila.empty()){
        if(++cont%f != 0){
            ans++;
            fila.pop();
            continue;
        }else{
            if(fila.front() <= p){
                ans += 5;
                fila.pop();
            }else{
                ll temp;
                temp = fila.front() - 2;
                fila.pop();
                fila.push(temp);
                ans += 10;
            }
        }
    }

    cout << ans;


    
    return 0;
}