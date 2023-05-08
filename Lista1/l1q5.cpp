#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    unsigned long dias = 0;
    cin >> n;
    int n2 = n;

    vector<unsigned long> v;

    while(n--){
        unsigned long x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(int i = 1; i < n2 + 1; i++){
        for(int j = 1 + i; j < n2 + 1; j++){
            if(v.at(j-1) >= i){
                dias++;
                break;
            }
        }
        
    }

    cout << dias;
    
    return 0;
}