#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    unsigned long p, g, f, c;

    cin >> p >> g >> f >> c;
    
    if((min(g,f) + c) <= p){
        cout << min(g,f) + c;
    }
    else{
        cout << p;
    }


    return 0;
}