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
bool ok(int m, vector<int> &a, int n, int k)
{
    int l = 0, r = 0, count = 1;
    int mn = a[l];
    int mx = a[l];
    while (r < n)
    {
        mx = max(mx, a[r]);
        mn = min(mn, a[r]);
        int range = (mx - mn + 1) / 2;
        if (range <= m)
            r++;
        else
        {
            count++;
            l = r;
            mn = a[l], mx = a[r];
            r++;
        }
    }
    return (count <= (k + 1));
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 1e9, ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ok(mid, a, n, k))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
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