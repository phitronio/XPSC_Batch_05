#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int ans = -1;
        for(int i=0; i<n; i++){
            if(mp[a[i]]>1){
                ans = a[i];
                break;
            }
        }
        if(ans==-1){
            cout << -1 << endl;
        }
        else{
            cout << 1 << endl;
            cout << ans << endl;
        }
    }
}
