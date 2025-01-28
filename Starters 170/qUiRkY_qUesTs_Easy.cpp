#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >>n;
        vector<long long>a(n+1);
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        long long sum=0;
        for(int i=1; i<=n; i++){
            sum+=a[i];
        }
        long long ans=sum;
        for(long long i=1; i<=n; i++){
            sum-=a[i];
            ans = max(ans, sum + (i*i));
        }
        cout << ans << endl;
    }
}
