class Solution {
public:
   vector<int> FirstNegativeInteger(vector<int>& a, int k) {
      int n = a.size(), l = 0, r = 0;
      vector<int> ans;
      queue<int> q;
      while (r < n) {
         if (a[r] < 0) {
            q.push(a[r]);
         }
         if (r - l + 1 == k) {
            if (!q.empty()) {
               ans.push_back(q.front());
               if (a[l] == q.front()) {
                  q.pop();
               }
            }
            else {
               ans.push_back(0);
            }
            l++, r++;
         }
         else {
            r++;
         }
      }
      return ans;
   }
};