#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, q;
   cin >> n >> q;
   vector<int> a(n);
   for (int i = 0;i < n;i++) {
      cin >> a[i];
   }

   for (int i = 0;i < q;i++) {
      int key, l = 0, r = n - 1, ans = -1, mid;
      cin >> key;
      while (l <= r) {
         mid = (l + r) / 2;
         if (key >= a[mid]) {
            ans = mid;
            l = mid + 1;
         }
         else {
            r = mid - 1;
         }
      }
      cout << ans + 1 << '\n';
   }
   return 0;
}