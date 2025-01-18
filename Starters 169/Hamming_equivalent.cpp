#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t ;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        bool ok=true;
        for(int i=0; i<n; i++){
            if(a[i] != i+1){
                int x = __builtin_popcount(a[i]);
                int y = __builtin_popcount(i+1);
                if(x!=y){
                    ok = false;
                    break;
                }
            }
        }
        if(ok){
            cout << "Yes" << '\n';
        }
        else {
            cout << "No" << '\n';
        }
    }
}
