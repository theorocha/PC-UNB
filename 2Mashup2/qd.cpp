#include <bits/stdc++.h>
#include <vector>
#include <queue>


#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
typedef long long ll;
using namespace std;


int main() { _
    
    int n;cin >> n;
    ll ans = 0;
    priority_queue<int> pq;
    int sand;
    cin >> sand;
    n--;

    while(n--){
        int aux; cin >> aux;
        pq.push(aux);
    }

    while(pq.top() >= sand){
        int aux = pq.top();
        aux--;
        ans++;
        sand++;
        pq.pop();
        pq.push(aux);
    }

     cout << ans;

    
    return 0;
}