#include <bits/stdc++.h>
using namespace std;

long long LCM(long long a, long long b) {
   return (a / __gcd(a, b)) * b;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   long long n, a, b, p, q;
   cin >> n >> a >> b >> p >> q;
   long long x = (n / a) * p, y = (n / b) * q, overlap = (n / LCM(a, b));
   long long ans = ((x + y) - (overlap * (p + q))) + (overlap * max(p, q));

   cout << ans << '\n';

   return 0;
}