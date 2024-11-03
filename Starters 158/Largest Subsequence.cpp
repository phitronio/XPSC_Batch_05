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
      int cnt1 = 0, cnt2 = 0;
      for (int i = 0;i < n - 1;i++) {
         if (s[i] == 'a' && s[i + 1] == 'b') {
            cnt1++;
         }

         if (s[i] == 'b' && s[i + 1] == 'a') {
            cnt2++;
         }
      }

      if (cnt1 == cnt2) {
         cout << n << '\n';
      }
      else {
         char first = s[0], last = s[n - 1];
         int ans1 = n, ans2 = n;
         for (int i = 0;i < n;i++) {
            if (s[i] != first) {
               break;
            }
            ans1--;
         }
         for (int i = n - 1;i >= 0;i--) {
            if (s[i] != last) {
               break;
            }
            ans2--;
         }
         cout << max(ans1, ans2) << '\n';
      }
   }
   return 0;
}