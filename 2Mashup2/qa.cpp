#include<bits/stdc++.h>
#include <string>
#include <vector>
#include <math.h>
#include <set>
 
typedef long long ll;
 
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n, k;
    cin >> n >> k;
 
    set<int> arvores;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arvores.insert(x);
    }
 
    int ans = 0;
    int ref = 1;
 
    auto it = arvores.begin();
    while (it != arvores.end()) {
        if (*it == ref) {
            ++it;
            ++ref;
        } else {
            ++ans;
            ref = *it + 1;
            ++it;
        }
    }
 
    if (ref <= k) {
        ++ans;
    }
 
    cout << ans << endl;
 
    return 0;
}