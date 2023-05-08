#include<bits/stdc++.h>
#include <string>
#include <vector>
 
using namespace std;




bool compare_pairs(const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second < p2.second;
}


 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    long long n;
    cin >> n;
    vector<pair <long,long>> v;
    vector<long long> ans;
 
    for(long long i = 0; i < n; i++){
        long long x;
        cin >> x;
        v.push_back(make_pair(x,i));
    }
 
    sort(v.begin(), v.end());
 
    long long colocacao = 1;
    long long aux = 0;
    aux = v.at(0).first;
    v.at(0).first = 1;
    long long ajuda = 0;
 
    for(long long i = 1; i < n; i++){
        if(v.at(i).first == aux){
            v.at(i).first = colocacao;
            ajuda++;
        }else{
            colocacao += ajuda + 1;
            aux = v.at(i).first;
            v.at(i).first = colocacao;
            ajuda = 0;
        }
    }

    sort(v.begin(), v.end(), compare_pairs);
    
    for(long long i = 0; i < n; i++){
      cout << v[i].first << " ";
    }

 
 

return 0;
 
}