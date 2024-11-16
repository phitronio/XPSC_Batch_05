#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   long long k;
   cin >> n >> k;
   vector<int> a(n);
   for (int i = 0;i < n;i++) {
      cin >> a[i];
   }

   int l = 0, r = 0, ans = 0;
   long long sum = 0;
   while (r < n) {
      sum += a[r];
      if (sum <= k) {
         ans = max(ans, r - l + 1);
      }
      else {
         sum -= a[l];
         l++;
      }
      r++;
   }

   cout << ans << '\n';

   return 0;
}