#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 9;
long long n, dp[maxN][3], happiness[maxN][3];

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   cin >> n;
   for (int i = 1;i <= n;i++) {
      for (int j = 0;j < 3;j++) {
         cin >> happiness[i][j];
      }
   }

   for (int i = 0;i < 3;i++) {
      dp[1][i] = happiness[1][i];
   }

   for (int day = 1;day <= n;day++) {
      for (int currentTask = 0;currentTask < 3;currentTask++) {
         long long maxProfit = 0;
         for (int lastTask = 0;lastTask < 3;lastTask++) {
            if (lastTask != currentTask) {
               maxProfit = max(maxProfit, dp[day - 1][lastTask] + happiness[day][currentTask]);
            }
         }
         dp[day][currentTask] = maxProfit;
      }
   }

   cout << max({ dp[n][0],dp[n][1],dp[n][2] }) << '\n';

   return 0;
}