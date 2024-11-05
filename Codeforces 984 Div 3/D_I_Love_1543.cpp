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
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<string> v;
    for (int i = 0; i < min(n / 2, m / 2); i++)
    {
        string temp;
        for (int j = i; j < m - i; j++)
        {
            temp.push_back(a[i][j]);
        }
        for (int k = i + 1; k < n - i; k++)
        {
            temp.push_back(a[k][m - i - 1]);
        }
        for (int j = m - i - 2; j >= i; j--)
        {
            temp.push_back(a[n - i - 1][j]);
        }
        for (int k = n - i - 2; k > i; k--)
        {
            temp.push_back(a[k][i]);
        }
        v.push_back(temp);
    }
    int ans = 0;
    for (auto x : v)
    {
        x.push_back(x[0]);
        x.push_back(x[1]);
        x.push_back(x[2]);
        int sz = x.size();
        for (int i = 0; i < sz - 3; i++)
        {
            if (x.substr(i, 4) == "1543")
                ans++;
        }
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