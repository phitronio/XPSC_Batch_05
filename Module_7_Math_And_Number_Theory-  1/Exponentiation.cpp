#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int power(int x, int n) {
   int ans = 1 % MOD;
   while (n) {
      if (n & 1) {
         ans = (1LL * ans % MOD * x % MOD) % MOD;
      }
      x = 1LL * x * x % MOD;
      n >>= 1;
   }

   return ans;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int x, n;
      cin >> x >> n;
      cout << power(x, n) << '\n';
   }
   return 0;
}