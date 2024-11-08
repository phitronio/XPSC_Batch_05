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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<int> dif(n);
    for (int i = 0; i < n; i++)
        dif[i] = a[i] - b[i];
    sort(dif.begin(), dif.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (x <= 0)
            break;
        if (dif[i] <= 0)
        {
            if (dif[i] == 0)
            {
                x--;
                dif[i] = 1;
            }
            else
            {
                x -= min(x, abs(dif[i]));
                if (x > 0)
                {
                    x--;
                    dif[i] = 1;
                }
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (dif[i] > 0)
            count++;
    }
    if (count > n / 2)
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