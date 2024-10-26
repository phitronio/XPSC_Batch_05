#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   // pair<string, int> student = { "dablu", 10 };
   // cout << student.first << " " << student.second << '\n';
   // student.first = "bablu";

   // auto [name, roll] = student;
   // cout << name << " " << roll << '\n';

   // int n;
   // cin >> n;
   // pair<string, int> students[n];
   // for (int i = 0;i < n;i++) {
   //    cin >> students[i].first >> students[i].second;
   // }

   // for (int i = 0;i < n;i++) {
   //    cout << students[i].first << " " << students[i].second << '\n';
   // }

   // for (auto [x, y] : students) {
   //    cout << x << " " << y << '\n';
   // }

   // tuple<string, int, string> t = { "karim", 10, "0191" };
   // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << '\n';
   // auto [name, roll, phoneNumber] = t;
   // cout << name << " " << roll << " " << phoneNumber << '\n';

   pair<string, pair<int, string>> p = { "dablu",{7,"01618"} };

   string name = p.first;
   int roll = p.second.first;
   string phoneNumber = p.second.second;

   cout << name << " " << roll << " " << phoneNumber << '\n';

   return 0;
}