#include<bits/stdc++.h>
#include <string>
#include <vector>
 
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n;
    cin >> n;
    int aux = 0;
 
    while(n--){
        int n,m;
        cin >> n >> m;
        char mz[n][m];
 
        for(int i = 0; i < n; i++){
            string linha;
            cin >> linha;
            for(int j = 0; j < m; j++){
                mz[i][j] = linha[j];
            }
        }

        for(int i = n-2; i > -1; i--){
            for(int j = 0; j < m; j++){
                aux = i;
                if(mz[i][j] == '*'){
                    //Codigo abaixo representa as pedras caindo até achar um obstáculo, outra pedra ou até acabar o vetor.
                    while(mz[aux + 1][j] != '*' and mz[aux + 1][j] != 'o' and aux < n-1){
                        mz[aux + 1][j] = '*'; 
                        mz[aux][j] = '.';
                        aux++; 
                    }
                }
            }
        }
        

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << mz[i][j];
            }
            cout << endl;
        }
 
 
 
 
    }
    
 
return 0;
 
}