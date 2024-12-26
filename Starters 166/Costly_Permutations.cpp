#ifndef ONLINE_JUDGE
#include "debugger.h"
#else
#define dbg(...)
#endif
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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    vector<bool> vis(n, false);
    priority_queue<int, vector<int>, greater<int>> m;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            int sz = 0;
            int j = i;
            while (!vis[j])
            {
                vis[j] = 1;
                sz++;
                j = a[j];
            }
            m.push(sz);
        }
    }
    int ans = 0;
    while (m.size() > 1)
    {
        int mx = m.top();
        m.pop();
        int mx1 = m.top();
        m.pop();
        ans += mx + mx1;
        m.push(mx + mx1);
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