#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int m, k;
        cin >> m >> k;
        string s;
        cin >> s;
        
        int cnt=0;
        for(int i=0; i<m; i++){
            if(s[i] == 'S') cnt++;
        }

        if(cnt>=k){
            cout << m << '\n';
        }
        else{
            int need = k-cnt;
            cout << m + (need-1) << '\n';
        }
    }
}
