#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        string a, b;
        cin >> a >> b;
        map<pair<int,int>, int>mp;
        for(int i=0; i<n; i++){
            int mn = min(a[i], b[i]);
            int mx = max(a[i], b[i]);
            mp[{mn, mx}]++;
        }

        int odd = 0;
        for(auto [pr, val]: mp){
            if(val%2==1) odd++;
        }
        if(odd>1){
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
}
