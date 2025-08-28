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

   int n, m;
   cin >> n >> m;
   DSU D(n);
   for (int i = 1;i <= m;i++) {
      string query;
      int u, v;
      cin >> query >> u >> v;
      if (query == "union") {
         D.merge(u, v);
      }
      else {
         cout << (D.same(u, v) ? "YES" : "NO") << '\n';
      }
   }

   return 0;
}