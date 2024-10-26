#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;
   deque<int> dq(n);
   for (int i = 0;i < n;i++) {
      // int x;
      // cin >> x;
      // dq.push_back(x);
      cin >> dq[i];
   }

   // sort(dq.begin(), dq.end());

   for (auto value : dq) {
      cout << value << " ";
   }
   cout << '\n';

   dq.push_front(8);
   dq.push_front(2);
   dq.pop_front();
   dq.pop_back();

   for (auto value : dq) {
      cout << value << " ";
   }
   cout << '\n';

   cout << dq.front() << " " << dq.back() << '\n';


   // push_back(),pop_back(),back();
   // push_font(),pop_front(),font()
   return 0;
}