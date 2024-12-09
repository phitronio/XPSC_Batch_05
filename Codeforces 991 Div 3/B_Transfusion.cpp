#include <bits/stdc++.h>
//#include <debugger.h>
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
    int sum_o = 0;
    int sum_e = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (i & 1)
            sum_o += x;
        else
            sum_e += x;
    }
    int e = n / 2;
    int o = n - (n / 2);
    if ((sum_e % e) != 0 || (sum_o % o) != 0)
    {
        no;
        return;
    }
    if ((sum_e / e) == (sum_o / o))
        yes;
    else
        no;
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