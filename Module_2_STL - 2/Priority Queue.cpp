#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   priority_queue<int, vector<int>, greater<int>> pq;
   pq.push(5);
   pq.push(2);
   pq.push(1);
   pq.push(5);
   pq.push(3);
   pq.push(2);

   // cout << pq.top() << '\n';
   // pq.pop();
   // cout << pq.top() << '\n';
   // pq.pop();
   // cout << pq.top() << '\n';
   // pq.pop();
   // cout << pq.top() << '\n';

   // cout << "Size -> " << pq.size() << '\n';
   // cout << pq.empty() << '\n';

   while (!pq.empty()) {
      int value = pq.top();
      pq.pop();
      cout << value << '\n';
   }
   return 0;
}