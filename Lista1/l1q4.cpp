#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    vector<string> nomes;
    vector<string> nomes_iniciais;

    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        nomes_iniciais.push_back(x);
        nomes.push_back(x);
    }

    sort(nomes.begin(), nomes.end());


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(nomes_iniciais.at(i) == nomes.at(j)){
                cout << j << " ";
            }
        }
    }
    
    return 0;
}