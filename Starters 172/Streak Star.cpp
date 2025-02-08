#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n, x;
      cin >> n >> x;
      vector<int> a(n);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
      }

      int ans = 0;
      for (int i = 0;i < n;i++) {
         int save = a[i], cnt = 1;
         a[i] *= x;
         for (int j = 1;j < n;j++) {
            if (a[j - 1] <= a[j]) {
               cnt++;
            }
            else {
               ans = max(ans, cnt);
               cnt = 1;
            }
         }
         ans = max(ans, cnt);
         a[i] = save;
      }

      cout << ans << '\n';
   }
   return 0;
}