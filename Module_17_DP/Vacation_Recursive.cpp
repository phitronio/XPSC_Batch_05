#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 9;
long long n, a[maxN], b[maxN], c[maxN], dp[maxN][3];

int f(int i, int last) {
   if (i > n) {
      return 0;
   }

   if (dp[i][last] != -1) {
      return dp[i][last];
   }

   long long ans = 0;
   for (int k = 0;k < 3;k++) {
      if (k == last) {
         continue;
      }
      if (k == 0) {
         ans = max(ans, a[i] + f(i + 1, k));
      }
      else if (k == 1) {
         ans = max(ans, b[i] + f(i + 1, k));
      }
      else {
         ans = max(ans, c[i] + f(i + 1, k));
      }
   }

   return dp[i][last] = ans;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   cin >> n;
   for (int i = 1;i <= n;i++) {
      cin >> a[i] >> b[i] >> c[i];
   }

   memset(dp, -1, sizeof(dp));

   cout << f(1, 3) << '\n';


   return 0;
}