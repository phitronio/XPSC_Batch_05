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
        vector<pair<int,int>>op;
        for(int i=0; i<n; ){
            if(a[i]==b[i]){
                i++;
                continue;
            }
            int l=i;
            while(i<n && a[i]!=b[i]){
                i++;
            }
            int r = i-1;
            op.push_back({l+1, r+1});
        }

        cout << op.size() << endl;
        for(auto p: op){
            cout << 1 << " " << p.first << " " << p.second << endl;
        }
    }
}
