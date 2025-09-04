#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 9, inf = 2e9;
int n, h[maxN], dp[maxN];

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   cin >> n;
   for (int i = 1;i <= n;i++) {
      cin >> h[i];
   }

   dp[1] = 0;
   dp[2] = abs(h[1] - h[2]);

   for (int i = 3;i <= n;i++) {
      dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
   }

   cout << dp[n] << '\n';

   return 0;
}