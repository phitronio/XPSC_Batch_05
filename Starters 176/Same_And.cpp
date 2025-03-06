#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n, m;
        cin >> n >> m;
        set<int>ans;
        ans.insert(n);
        for(int i=0; i<63; i++){
            long long val = (1LL<<i);
            if((val|n) <=m ) ans.insert(val|n);
        }
        if(ans.size()== 1){
            cout << -1 << endl;
            continue;
        }
        cout << ans.size() << endl;
        for(auto u: ans){
            cout << u << " ";
        }
        cout << endl;
    }
}
