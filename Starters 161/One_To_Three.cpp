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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i - 1] + a[i + 1] == 4)
        {
            if (a[i] > 2)
                a[i] = 4 - a[i];
        }
    }
    for (int i = n - 2; i >= 1; i--)
    {
        if (a[i - 1] + a[i + 1] == 4)
        {
            if (a[i] > 2)
                a[i] = 4 - a[i];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    cout << sum << "\n";
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