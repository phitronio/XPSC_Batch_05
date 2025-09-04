#include <bits/stdc++.h>
using namespace std;

const int maxN = 4e4, N = 5e2, M = 4e4 + 9, MOD = 1e9 + 7;
long long dp[N][M];
vector<int> palindromes;

long long f(int i, int sum) {
   if (i >= palindromes.size()) {
      return (sum == 0);
   }

   if (dp[i][sum] != -1) {
      return dp[i][sum];
   }

   long long ans = 0;
   if (palindromes[i] <= sum) {
      ans += f(i, sum - palindromes[i]) % MOD;
   }
   ans += f(i + 1, sum) % MOD;

   return dp[i][sum] = ans % MOD;
}

void prec() {
   for (int i = 1;i <= maxN;i++) {
      string s = to_string(i), t = s;
      reverse(s.begin(), s.end());
      if (s == t) {
         palindromes.push_back(i);
      }
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   prec();
   memset(dp, -1, sizeof(dp));

   int t;
   cin >> t;
   while (t--) {
      int targetSum;
      cin >> targetSum;
      cout << f(0, targetSum) << '\n';
   }

   return 0;
}