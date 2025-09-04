#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 9, inf = 2e9;
int n, h[maxN], dp[maxN];

int f(int i) {
   if (i == n) {
      return 0;
   }

   if (dp[i] != -1) {
      return dp[i];
   }

   int ans = inf;
   if (i + 1 <= n) {
      ans = min(ans, abs(h[i] - h[i + 1]) + f(i + 1));
   }
   if (i + 2 <= n) {
      ans = min(ans, abs(h[i] - h[i + 2]) + f(i + 2));
   }

   return dp[i] = ans;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   cin >> n;
   for (int i = 1;i <= n;i++) {
      cin >> h[i];
   }

   for (int i = 0;i <= n;i++) {
      dp[i] = -1;
   }

   cout << f(1) << '\n';

   return 0;
}