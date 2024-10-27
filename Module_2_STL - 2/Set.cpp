#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;
   set<int> s;
   for (int i = 1;i <= n;i++) {
      int x;
      cin >> x;
      s.insert(x);
   }

   // auto it = s.begin();
   // it++;
   // it++;
   // it++;
   // it--;
   // cout << *it << '\n';

   for (auto value : s) {
      cout << value << " ";
   }
   cout << '\n';

   // auto it = s.find(25);
   // if (it != s.end()) {
   //    cout << "Found" << '\n';
   // }
   // else {
   //    cout << "Not Found" << '\n';
   // }

   // s.erase(6);

   // for (auto value : s) {
   //    cout << value << " ";
   // }
   // cout << '\n';

   // cout << s.count(4) << '\n';

   // int N;
   // cin >> N;
   // auto it = s.lower_bound(N);

   // if (it == s.end()) {
   //    cout << "END" << '\n';
   // }
   // else {
   //    cout << *it << '\n';
   // }

   int N;
   cin >> N;
   auto it = s.upper_bound(N);

   if (it == s.end()) {
      cout << "END" << '\n';
   }
   else {
      cout << *it << '\n';
   }

   return 0;
}