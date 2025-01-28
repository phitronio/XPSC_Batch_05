#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<int>a(n);
        unordered_map<int,int>lastidx;
        unordered_map<int,int>paici;
        for(int i=0; i<n; i++){
            cin >> a[i];
            lastidx[a[i]] = i;
        }
        int ans=0;

        for(int i=0; i<n; i++){
            int last = lastidx[a[i]];
            while(i<n && i<last){
                last = max(last, lastidx[a[i]]);
                if(paici[a[i]] == 0){
                    ans++;
                    paici[a[i]] = 1;
                }
                i++;
            }
        }
        cout << ans << '\n';
    }
}
