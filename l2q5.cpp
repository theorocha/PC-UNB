#include <bits/stdc++.h>
#include <vector>
#include <queue>

typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll ncaixas, nclientes, ans = 0;
    cin >> ncaixas >> nclientes;

    queue<ll> fila;
    vector<pair<ll, ll>> caixas;

    for(int i = 0; i < ncaixas; i++){
        ll x;
        cin >> x;
        caixas.push_back({x,0});
    }

    for(int i = 0; i < nclientes; i++){
        ll x;
        cin >> x;
        fila.push(x);
    }

    pair<ll,ll> aux_menor;
    ans = 0;

    while(!fila.empty()){
        //acha caixa livre c menor tempo;
        aux_menor = {100000, 0};
        for(int i = 0; i < ncaixas; i++){
            if(caixas.at(i).second < aux_menor.first){
                aux_menor = {caixas.at(i).second, i};
            }
        }

        caixas.at(aux_menor.second).second += fila.front() * caixas[aux_menor.second].first;
        fila.pop();
        caixas.at(aux_menor.second).second > ans? ans = caixas[aux_menor.second].second : 0;
    }

    cout << ans;

    return 0;
}

