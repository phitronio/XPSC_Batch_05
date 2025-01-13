#include <bits/stdc++.h>
using namespace std;

const int maxN = 30;
vector<int> allPrimes;

void sieve() {
   vector<bool> prime(maxN + 1, true);
   for (int i = 2;i * i <= maxN;i++) {
      if (prime[i]) {
         for (int j = i + i;j <= maxN;j += i) {
            prime[j] = false;
         }
      }
   }

   for (int i = 2;i <= maxN;i++) {
      if (prime[i]) {
         allPrimes.push_back(i);
      }
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   sieve();

   int n;
   cin >> n;
   map<int, int> cnt;
   int idx = 0;

   while (n > 1) {
      while (true) {
         if (n % allPrimes[idx] != 0) {
            break;
         }
         cnt[allPrimes[idx]]++;
         n /= allPrimes[idx];
      }
      idx++;
   }

   for (auto [x, y] : cnt) {
      cout << x << " -> " << y << '\n';
   }

   return 0;
}