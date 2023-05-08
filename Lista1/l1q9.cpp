#include <bits/stdc++.h>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n, m;
    cin >> n >> m;
    int comeca_vertical = 10;
    int termina_horizontal = 0;
    int termina_vertical = 0;
    int comeca_horizontal = 10;
    int mz[n][m];
 
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        for(int j = 0; j < m;j++){
            mz[i][j] = x[j] - '0'; 
            if(mz[i][j] == 1){
                if(comeca_horizontal > j){
                    comeca_horizontal = j;
                }
                if(termina_horizontal < j){
                    termina_horizontal  = j;
                }
                if(comeca_vertical > i){
                    comeca_vertical  = i;
                }
                if(termina_vertical < i){
                    termina_vertical  = i;
                }
            }
        }
    }
 
    int des_h = comeca_horizontal-termina_horizontal;
    int des_v = comeca_vertical-termina_vertical;
    if (des_h != 10 && des_v != 10){
        cout << abs(des_h) + 1  << "x" << abs(des_v)+ 1;
    }else{
        cout << "0x0";
    }
 
    
    return 0;
}