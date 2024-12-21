#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      // (a*b)%MOD
      // (a%MOD*b%MOD)%MOD

      int n, ans = 1;
      cin >> n;
      for (int i = 1;i <= n;i++) {
         ans = (1LL * ans % MOD * i % MOD) % MOD;
      }
      cout << ans << '\n';

      // ans = 1
      // ans =(1%MOD*2%MOD)%MOD
      // ans =(2%MOD*3%MOD)%MOD
      // ans =(6%MOD*4%MOD)%MOD
      // ans =(24%MOD*5%MOD)%MOD
   }
   return 0;
}