#include <bits/stdc++.h>
#include <stack>
#include <set>

typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    stack<int> p;
    set<int> s;

    ll n;
    cin >> n;

    while(n--){
        char c;
        ll el;
        cin >> c >> el;

        if(c == 'A'){
            p.push(el);
            s.insert(el);
            continue;
        }else if(c == 'R'){
            s.erase(p.top());
            p.pop();
        }else{
            if(!p.empty())
                cout << *prev(s.end()) << endl;
            else
                cout << 0 << endl;
            }
    }
    
    return 0;
}










// if(fc.front().first.first < cap){
//                 espacoV += fc.front().first.first;
//                 while(espacoV >= cap){
//                     espacoV -= cap;
//                     qtd_em_u++;
//                 }
//                 fc.pop();
//             }else{
//                 espacoV += (fc.front().first.first % cap);
//                 while(espacoV >= cap){
//                     espacoV -= cap;
//                     qtd_em_u++;
//                 }
//                 qtd_em_u += fc.front().first.first / cap;
//                 fc.pop();
//             }