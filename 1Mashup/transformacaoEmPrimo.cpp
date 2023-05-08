#include<bits/stdc++.h>
#include <string>
 
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    long long n,s;
    cin >> n >> s;
  
 
    if(s%n == 0){
        cout << s/n;
    }else{
        cout << s/n + 1;
    }
 
return 0;
 
}