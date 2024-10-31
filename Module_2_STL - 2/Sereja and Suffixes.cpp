#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m;
   cin >> n >> m;
   vector<int> a(n + 1), cnt(n + 1);
   for (int i = 1;i <= n;i++) {
      cin >> a[i];
   }

   set<int> s;
   for (int i = n;i >= 1;i--) {
      s.insert(a[i]);
      cnt[i] = s.size();
   }

   for (int i = 1;i <= m;i++) {
      int pos;
      cin >> pos;
      cout << cnt[pos] << '\n';
   }

   return 0;
}