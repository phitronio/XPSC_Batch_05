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
      vector<long long> a(n), b(n);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
      }
      for (int i = 0;i < n;i++) {
         cin >> b[i];
      }

      int cnt = 0, idx = -1;
      for (int i = 0;i < n;i++) {
         if (min(a[i], b[i]) != b[i]) {
            cnt++;
            idx = i;
         }
      }

      if (cnt == 0 || cnt > 1) {
         long long ans = 0;
         for (int i = 0;i < n;i++) {
            ans += min(a[i], b[i]);
         }
         cout << ans << '\n';
      }
      else {
         long long ans = 0, res = 0;
         for (int i = 0;i < n;i++) {
            ans += b[i];
         }
         res = ans;
         for (int i = 0;i < n;i++) {
            if (i != idx) {
               long long currValue = res - b[idx] - b[i] + a[i] + a[idx];
               ans = min(ans, currValue);
            }
         }
         cout << ans << '\n';
      }
   }

   return 0;
}