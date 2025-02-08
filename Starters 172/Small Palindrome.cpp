#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int x, y;
      cin >> x >> y;
      int n = x + y;
      vector<int> ans(n);
      int l = 0, r = n - 1;
      while ((l <= r) && x >= 1) {
         ans[l] = 1;
         ans[r] = 1;
         l++, r--;
         x -= 2;
      }
      while ((l <= r) && y >= 1) {
         ans[l] = 2;
         ans[r] = 2;
         l++, r--;
         y -= 2;
      }

      for (auto val : ans) {
         cout << val;
      }
      cout << '\n';
   }

   return 0;
}