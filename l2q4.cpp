#include <bits/stdc++.h>
#include <queue>
#include <vector>
 
typedef long long int ll;
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll qtd_caminhoes, qtd_em_u, cap, tamanho, espacoV = 0;
    cin >> qtd_caminhoes >> qtd_em_u >> cap;
    tamanho = qtd_caminhoes;
 
 
    vector<pair<pair<ll, bool> ,ll>> v;
    queue<pair<pair<ll, bool> ,ll>> fc;
    //bool false para 1ª passagem do caminhão, true para a 2ª;
 
    while(tamanho--){
        ll x;
        cin >> x;
        v.push_back({{x,false},0});
    }
 
    for(int i = 0; i < qtd_caminhoes; i++){
        int a;
        cin >> a;
        v.at(i).second = a;
        fc.push(v.at(i));
    }
 
    while(!fc.empty()){
        if(fc.front().second == 0){
            espacoV += fc.front().first.first % cap;
            qtd_em_u += fc.front().first.first / cap;
            if(espacoV >= cap){
                espacoV -= cap;
                qtd_em_u++;
            }
            fc.pop();
        }else{
            if(fc.front().first.first >= cap and qtd_em_u > 0){
                    if(fc.front().first.first / cap <= qtd_em_u){
                        qtd_em_u -= ((fc.front().first.first) / cap);
                        fc.pop();
                        continue;
                    }else{
                        qtd_em_u = 0;
                        fc.pop();
                        continue;
                    }
            }

            else if(qtd_em_u == 0 and fc.front().first.second == false){
                fc.front().first.second = true;
                fc.push(fc.front());
                fc.pop();
                continue;
            }
            
            else if(fc.front().first.second == true and qtd_em_u == 0){
                fc.pop();
            }
            
            else{
                fc.pop();
            }
            
 
        }
    }
 
    cout << (qtd_em_u * cap ) + espacoV;
 
 
 
    
    return 0;
}