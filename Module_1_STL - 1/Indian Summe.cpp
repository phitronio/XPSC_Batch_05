#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;
   map<pair<string, string>, bool> mp;
   for (int i = 1;i <= n;i++) {
      string a, b;
      cin >> a >> b;
      mp[{a, b}] = true;
   }

   // for (auto value : mp) {
   //    pair<string, string> p = value.first;
   //    bool ok = value.second;
   //    cout << p.first << " " << p.second << " " << ok << '\n';
   //    cout << value.first.first << " " << value.first.second << '\n';
   // }

   cout << mp.size() << '\n';
   return 0;
}