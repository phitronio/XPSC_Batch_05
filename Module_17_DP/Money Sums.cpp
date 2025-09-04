#include <bits/stdc++.h>
using namespace std;

const int N = 1e2 + 9, M = 1e5 + 9;
int n, a[N], dp[N][M];

int f(int i, int sum) {
   if (i > n) {
      return (sum == 0);
   }

   if (dp[i][sum] != -1) {
      return dp[i][sum];
   }

   int ans = 0;
   if (a[i] <= sum) {
      ans += f(i + 1, sum - a[i]);
   }
   ans += f(i + 1, sum);

   return dp[i][sum] = ans;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int sum = 0;
   cin >> n;
   for (int i = 1;i <= n;i++) {
      cin >> a[i];
      sum += a[i];
   }

   for (int i = 1;i <= n;i++) {
      for (int j = 0;j <= sum;j++) {
         dp[i][j] = -1;
      }
   }

   vector<int> ans;
   for (int targetSum = 1;targetSum <= sum;targetSum++) {
      if (f(1, targetSum)) {
         ans.push_back(targetSum);
      }
   }

   cout << ans.size() << '\n';
   for (auto value : ans) {
      cout << value << " ";
   }
   cout << '\n';

   return 0;
}