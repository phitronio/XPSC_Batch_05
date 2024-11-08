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
    int h, k;
    cin >> h >> k;
    int cnt = 0;
    for (int i = 2; i * i <= h; i++)
    {
        if (h % i == 0)
        {
            while (h % i == 0)
            {
                cnt++;
                h /= i;
            }
        }
    }
    if (h > 1)
        cnt++;
    int ans = cnt + log2(k);
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