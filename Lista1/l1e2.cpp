#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;
    int r = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

     for(int i = 0; i < n - 1; i++){
       r += v[n-1] - v[i];
    }

    cout << r;


    
    return 0;
}