#include <bits/stdc++.h>
using namespace std;

const int maxN = 3e5 + 9;
vector<int> g[maxN], operations(maxN);
string s;

void dfs(int u) {
   if (g[u][0] != 0) {
      int v = g[u][0];
      if (s[u - 1] != 'L') {
         operations[v] = operations[u] + 1;
      }
      else {
         operations[v] = operations[u];
      }
      dfs(v);
   }
   if (g[u][1] != 0) {
      int v = g[u][1];
      if (s[u - 1] != 'R') {
         operations[v] = operations[u] + 1;
      }
      else {
         operations[v] = operations[u];
      }
      dfs(v);
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      for (int i = 0;i <= n;i++) {
         g[i].clear();
         operations[i] = 0;
      }

      cin >> s;
      for (int i = 1;i <= n;i++) {
         int l, r;
         cin >> l >> r;
         g[i].push_back(l);
         g[i].push_back(r);
      }

      dfs(1);
      int ans = INT_MAX;
      for (int i = 1;i <= n;i++) {
         if (g[i][0] == 0 && g[i][1] == 0) {
            ans = min(ans, operations[i]);
         }
      }

      cout << ans << '\n';
   }
   return 0;
}