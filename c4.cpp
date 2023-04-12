#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;
    long arr[n];
    long cont = 0;
    
    

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            cont += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    
    cout << cont << endl;


    
    return 0;
}