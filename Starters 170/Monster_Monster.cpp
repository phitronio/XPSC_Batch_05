#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<long long>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a.rbegin(),a.rend());

        long long sum =0, ans=a[0];
        for(int i=1; i<n; i++){
            sum += x;
            long long curr = a[i] + sum;
            ans = max(ans, curr);
        }
        cout << ans << endl;
    }
}
