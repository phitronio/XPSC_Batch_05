#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      string a, b;
      cin >> a >> b;
      int n = a.size(), j = b.size() - 1;
      vector<int> ans(n);
      for (int i = n - 1;i >= 0;i--) {
         if (a[i] == b[j]) {
            j--;
            ans[i] = 1;
            if (j == -1) {
               break;
            }
         }
      }

      bool ok = true;
      if (j != -1) {
         ok = false;
      }

      if (ok) {
         long long res = 0, cost = 1;
         for (int i = 0;i < n;i++) {
            if (ans[i] == 0) {
               res += cost;
            }
            else {
               cost++;
            }
         }
         cout << res << '\n';
      }
      else {
         cout << -1 << '\n';
      }
   }
   return 0;
}