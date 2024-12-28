#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n, q;
      cin >> n >> q;
      vector<int> a(n), prefix(n + 1);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
      }
      sort(a.rbegin(), a.rend());
      for (int i = 1;i <= n;i++) {
         prefix[i] = prefix[i - 1] + a[i - 1];
      }
      for (int i = 0;i < q;i++) {
         int k, ans = -1;
         cin >> k;
         auto it = lower_bound(prefix.begin(), prefix.end(), k);
         if (it != prefix.end()) {
            ans = it - prefix.begin();
         }
         cout << ans << '\n';
      }
   }
   return 0;
}