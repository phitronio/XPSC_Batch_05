#include <bits/stdc++.h>
#define int long long
#define ll long long
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
    if (n % 2 == 0)
    {
        cout << -1 << "\n";
        return;
    }
    int hi = n - 1;
    int lo = 1;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            cout << hi << " ";
            hi -= 2;
        }
        else
        {
            cout << lo << " ";
            lo += 2;
        }
    }
    cout << "\n";
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