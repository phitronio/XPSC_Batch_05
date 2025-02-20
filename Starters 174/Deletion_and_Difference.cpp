#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        int z=0;
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]==0){
                z++;
            }
            else mp[a[i]]++;
        }
        int ans=0;
        int x=0;
        for(auto [u,v] : mp){
            if(v>1) x++;
            ans += (v%2);
        }

        if(z>0 or x>0) ans++;
        
        cout << ans << '\n';
    }
}
