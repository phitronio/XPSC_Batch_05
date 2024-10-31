#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n, m;
      cin >> n >> m;
      map<int, set<int>> mp;
      for (int i = 1;i <= n;i++) {
         int x;
         cin >> x;
         mp[x].insert(i);
      }

      for (int i = 1;i <= m;i++) {
         int l, r;
         cin >> l >> r;
         if ((mp.find(l) == mp.end()) || (mp.find(r) == mp.end())) {
            cout << "NO" << '\n';
         }
         else {
            int startingStationLeftMostIndex, endingStationRightMostIndex;
            startingStationLeftMostIndex = *mp[l].begin();
            endingStationRightMostIndex = *mp[r].rbegin();
            if (startingStationLeftMostIndex < endingStationRightMostIndex) {
               cout << "YES" << '\n';
            }
            else {
               cout << "NO" << '\n';
            }
         }
      }
   }

   return 0;
}