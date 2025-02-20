#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >>a[i];
        }
        int ans=0;
        for(int i=0; i<n; i++){
            int val = a[i];
            if(i==1){
                val -= a[0];
            }
            if(i==n-2){
                val -= a[n-1];
            }
            ans = max(ans, val);
        }

        cout << ans << '\n';
    }
}
