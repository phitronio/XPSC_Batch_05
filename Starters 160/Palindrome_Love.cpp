#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
const int mod = 1e9 + 7;
bool is_palindrome(string &s1)
{
    int i = 0, r = s1.size() - 1;
    while (i <= r)
    {
        if (s1[i] != s1[r])
            return false;
        i++;
        r--;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 2)
    {
        if (s[0] != s[1])
        {
            minus;
            return;
        }
        else
        {
            cout << 0 << "\n";
            return;
        }
    }
    if (s[0] != s[n - 1])
    {
        string s1 = s.substr(0, n - 1);
        string s2 = s.substr(1, n - 1);
        if (is_palindrome(s1) && is_palindrome(s2))
            minus;
        else
            cout << 1 << "\n";
        return;
    }
    int l = 1, r = n - 2;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            cout << 1 << "\n";
            return;
        }
        l++;
        r--;
    }
    cout << 0 << "\n";
}

int32_t main()
{
    fastread();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}