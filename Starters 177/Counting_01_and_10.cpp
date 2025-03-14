#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long ans = 0;
        for(int z=0; z<=n/2; z++){
            ans += (z* 1LL*(n-z)) + 1;
        }
        cout << ans << endl;
    }
}
