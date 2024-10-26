#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      string s;
      cin >> s;
      int firstPos = -1, lastPos = -1;
      firstPos = s.find('B');
      lastPos = s.rfind('B');
      int ans = lastPos - firstPos + 1;
      cout << ans << '\n';
   }
   return 0;
}