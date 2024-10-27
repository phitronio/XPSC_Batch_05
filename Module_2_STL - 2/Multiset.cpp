#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;
   multiset<int> ml;
   for (int i = 1;i <= n;i++) {
      int x;
      cin >> x;
      ml.insert(x);
   }

   // auto it = ml.begin();
   // it++;
   // it++;
   // it++;
   // it--;
   // cout << *it << '\n';

   // for (auto value : ml) {
   //    cout << value << " ";
   // }
   // cout << '\n';


   // auto it = ml.find(15);
   // if (it != ml.end()) {
   //    cout << "Found" << '\n';
   // }
   // else {
   //    cout << "Not Found" << '\n';
   // }


   // ml.erase(6);
   // // O(logn)

   // ml.erase(9);
   // // O(logn + k)

   // for (auto value : ml) {
   //    cout << value << " ";
   // }
   // cout << '\n';

   // auto it = ml.find(9);
   // ml.erase(it);

   // O(logn+logn)
   // O(2logn)
   // O(logn)

   for (auto value : ml) {
      cout << value << " ";
   }
   cout << '\n';

   // O(logn)
   // O(logn + k)
   // cout << ml.count(9) << '\n';


   // int N;
   // cin >> N;
   // auto it = ml.lower_bound(N);

   // if (it == ml.end()) {
   //    cout << "END" << '\n';
   // }
   // else {
   //    cout << *it << '\n';
   // }


   int N;
   cin >> N;
   auto it = ml.upper_bound(N);
   ml.erase(it);

   if (it == ml.end()) {
      cout << "END" << '\n';
   }
   else {
      cout << *it << '\n';
   }

   for (auto value : ml) {
      cout << value << " ";
   }
   cout << '\n';


   return 0;
}