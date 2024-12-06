#include <bits/stdc++.h>
using namespace std;
const int B = 30;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n, K;
      cin >> n >> K;
      vector<int> a(n);

      for (int i = 0;i < n;i++) {
         cin >> a[i];
      }

      vector<int> bits(B + 1);
      for (int i = 0;i < n;i++) {
         for (int k = B;k >= 0;k--) {
            if ((a[i] >> k) & 1) {
               bits[k]++;
            }
         }
      }

      int ans = 0;
      for (int k = B;k >= 0;k--) {
         if (bits[k] == n) {
            ans += (1LL << k);
         }
         else {
            int need = n - bits[k];
            if (K >= need) {
               ans += (1LL << k);
               K -= need;
            }
         }
      }

      cout << ans << '\n';
   }

   return 0;
}