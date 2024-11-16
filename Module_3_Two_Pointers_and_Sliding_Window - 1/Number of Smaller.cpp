#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m;
   cin >> n >> m;
   vector<int> a(n), b(m);
   for (int i = 0;i < n;i++) {
      cin >> a[i];
   }

   for (int i = 0;i < m;i++) {
      cin >> b[i];
   }

   int l = 0, r = 0, cnt = 0;
   while (r < m) {
      if (l < n && a[l] < b[r]) {
         cnt++, l++;
      }
      else {
         cout << cnt << " ";
         r++;
      }
   }

   return 0;
}