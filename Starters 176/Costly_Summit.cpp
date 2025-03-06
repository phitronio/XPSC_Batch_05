#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        string s;
        cin >> s;
        vector<int>a(5);
        for(int i=0; i<n; i++){
            a[s[i]-'A']++;
        }
        // for(int i=0; i<5; i++){
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        sort(a.begin(), a.end());
        int ans = 0;
        int cnt = 0;
        int lastCst = 0;
        for(int i=0; i<5; i++){
            cnt += a[i];
            int cst = (cnt*(cnt+1))/2;
            if(cst-lastCst<=c){
                ans += cst-lastCst;
            }
            else ans += c;

            lastCst = cst;
        }
        cout << ans << endl;
    }
    
}
