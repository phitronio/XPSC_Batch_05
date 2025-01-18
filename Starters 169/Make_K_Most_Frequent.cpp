#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> cnt(21);

        for(int i=0; i<n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        int mx_cnt = *max_element(cnt.begin(), cnt.end());
        if(cnt[k] == mx_cnt){
            cout << 0 << '\n';
            return;
        }

        vector<int>cnt_pre = cnt;

        for(int i=0; i<n; i++){
            mx_cnt = *max_element(cnt_pre.begin(), cnt_pre.end());
            if(cnt_pre[k] == mx_cnt){
                cout << 1 << '\n';
                return;
            }
            cnt_pre[a[i]]--;
        }


        vector<int>cnt_suff = cnt;

        for(int i=n-1; i>=0; i--){
            mx_cnt = *max_element(cnt_suff.begin(), cnt_suff.end());
            if(cnt_suff[k] == mx_cnt){
                cout << 1 << '\n';
                return;
            }
            cnt_suff[a[i]]--;
        }
        cout << 2 << '\n';

}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
