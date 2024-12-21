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
void solve()
{
    string s;
    cin >> s;
    string ans;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int cur = s[i] - '0';
        int pos = i;
        int des = min((10LL+i), n);
        for (int j = i; j < des; j++)
        {
            int now = s[j] - '0';
            if ((now - (j - i)) > cur)
            {
                pos = j;
                cur = now - (j - i);
            }
        }
        while (pos > i)
        {
            swap(s[pos], s[pos - 1]);
            pos--;
        }
        ans.push_back(char(cur + '0'));
    }
    cout << ans << "\n";
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