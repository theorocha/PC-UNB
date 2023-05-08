#include <bits/stdc++.h>
 
using namespace std;
 
int retSoma(int n){
    int soma = 0;
    if((n%10) == n){
        soma += n;
        return soma;
    }else{
        soma += n%10;
        return soma + retSoma(n/10);
    }
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, max, min;
    int ans = 0;
    cin >> n >> min >> max;
 
 
    for(unsigned int i = 1; i < n+1; i++){
        if(retSoma(i) <= max && retSoma(i) >= min){
            ans += i;
        }
    }
 
    cout << ans;
 
    return 0;
}