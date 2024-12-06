#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;
   // O(2^n * n)
   for (int mask = 0;mask < (1 << n);mask++) {
      cout << mask << " -> ";
      for (int k = 0;k < n;k++) {
         if ((mask >> k) & 1) {
            cout << 1 << " ";
         }
         else {
            cout << 0 << " ";
         }
      }
      cout << '\n';
   }

   return 0;
}