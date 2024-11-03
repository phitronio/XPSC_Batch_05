#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      vector<ll> a(n);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
      }

      vector<int> ans;
      map<ll, int> cnt;
      for (int i = 0;i < n;i++) {
         cnt[a[i]]++;
         if (cnt[a[i]] >= 2) {
            ll value = a[i];
            while (true) {
               int total = cnt[value];
               if (cnt[value] < 2) {
                  break;
               }
               cnt.erase(value);
               for (int j = 1;j <= (total / 2);j++) {
                  cnt[2LL * value]++;
               }
               if (total % 2 != 0) {
                  cnt[value]++;
               }
               value *= 2;
            }
         }
         ans.push_back(cnt.size());
      }
      for (int i = 0;i < n;i++) {
         cout << ans[i] << " ";
      }
      cout << '\n';
   }

   return 0;
}