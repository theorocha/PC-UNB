#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    bool contido[n] = {false};

    for(int i = 0; i < n - 1; i++){
        int numero;
        cin >> numero;
        contido[numero - 1] = true;
    }

    for(int i = 0; i < n; i++){
        if(!contido[i]){
            cout << i+1 << endl;
            break;
        }
    }

    
    return 0;
}