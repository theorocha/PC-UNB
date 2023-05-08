
#include<bits/stdc++.h>
#include <string>
#include <vector>
 
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n;
    int cont = 0;
    cin >> n;
    string pal;
    cin >> pal;
    for(int i = 1; i < n; i++){
        if(pal[i-1] == pal[i]){
            cont++;
        }
    }
 
    cout << cont;
 
 
 
 
return 0;
 
}