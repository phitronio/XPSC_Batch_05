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
    int one = 0;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == n - 1 && x == 1)
        {
            one++;
        }

        if (i == 0 && x == 0)
        {
            zero++;
        }
    }
    if (one & zero)
        cout << 2 * n - 2 << "\n";
    else
        cout << 2 * n - 1 << "\n";
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