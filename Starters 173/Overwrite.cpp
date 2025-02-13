#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<int>b(m);
        int mn = INT_MAX;
        for(int i=0; i<m; i++){
            cin >> b[i];
            mn = min(mn, b[i]);
        }

        while(b[0]!=mn){
            int val = b.back();
            b.pop_back();
            b.insert(b.begin(), val);
        }
        
        bool ok = false;
        for(int i=0; i<n-m; i++){
            if(ok && m!=1){
                a[i] = b[0];
                continue;
            }
            if(a[i]>b[0]){
                a[i] = b[0];
                ok=true;
            }
        }

        if(ok && m!=1){
            int j=0;
            for(int i=n-m; i<n; i++){
                a[i] = b[j];
                j++;
            }
        }
        else{
            ok = false;
            int j=0;
            for(int i=n-m; i<n; i++){
                if(ok){
                    a[i] = b[j];
                    j++;
                    continue;
                }
                if(a[i]<b[j]){
                    break;
                }
                else if(a[i]==b[j]){
                    j++;
                    continue;
                }
                else{
                    a[i] = b[j];
                    ok=true;
                    j++;
                }
                
            }
        }

        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
