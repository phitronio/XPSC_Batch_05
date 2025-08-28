#include <bits/stdc++.h>
using namespace std;

struct DSU {
   vector<int> par, rnk, siz;
   int c;
   DSU(int n) :par(n + 1, -1), rnk(n + 1, 0), siz(n + 1, 1), c(n) {
      for (int i = 1;i <= n;i++) {
         par[i] = i;
      }
   }
   int find(int i) {
      return (par[i] == i ? i : (par[i] = find(par[i])));
   }
   bool same(int u, int v) {
      return find(u) == find(v);
   }
   int getSize(int u) {
      return siz[find(u)];
   }
   int cnt() {
      return c;
   }
   void merge(int u, int v) {
      if ((u = find(u)) == (v = find(v))) {
         return;
      }
      else {
         c--;
      }

      if (rnk[u] > rnk[v]) {
         swap(u, v);
      }
      else if (rnk[u] == rnk[v]) {
         rnk[v]++;
      }
      par[u] = par[v];
      siz[v] += siz[u];
   }
};

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, d, extraEdge = 0;
   cin >> n >> d;

   DSU D(n);
   for (int i = 1;i <= d;i++) {
      int u, v;
      cin >> u >> v;
      if (D.same(u, v)) {
         extraEdge++;
      }
      else {
         D.merge(u, v);
      }

      vector<int> cnt(n + 1);
      for (int j = 1;j <= n;j++) {
         cnt[D.find(j)]++;
      }

      vector<int> cc;
      for (int j = 1;j <= n;j++) {
         cc.push_back(cnt[j]);
      }

      sort(cc.rbegin(), cc.rend());

      int ans = cc[0];
      for (int j = 1;j < min((int)cc.size(), extraEdge + 1);j++) {
         ans += cc[j];
      }
      cout << ans - 1 << '\n';
   }
   return 0;
}