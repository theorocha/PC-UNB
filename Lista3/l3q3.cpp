#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string t1,t2;
    cin >> t1 >> t2;

    int n;
    cin >> n;

    vector<char> v1;
    vector<char> v2;
 

    for(int i = 0; i < 26; i++){
        v1.push_back(t1[i]);
        v2.push_back(t2[i]);

    }

    while(n--){
        string x;
        cin >> x;

        for(int i = 0; i < x.size(); i++){
            if(isdigit(x[i])){
                cout << x[i];
                continue;
            }else{
                if(islower(x[i])){
                    auto it = lower_bound(v1.begin(), v1.end(), x[i]);
                    cout << v2.at(distance(v2.begin(), it));
                }else{
                    char aux = tolower(x[i]);
                    auto it = lower_bound(v1.begin(), v1.end(), aux);
                    cout << toupper(v2.at(distance(v2.begin(), it)));
                }
            }

        }

        cout << endl;
    }


    
    return 0;
}