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
    string s;
    cin >> s;
    int zero_zero = 0, one_one = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
            one_one++;
        else if (s[i] == '0' && s[i + 1] == '0')
            zero_zero++;
    }
    if (zero_zero == 0 && one_one == 0)
    {
        cyes;
        return;
    }
    if (zero_zero >= 2 || one_one >= 2)
    {
        cno;
        return;
    }
    if (zero_zero == 1 && one_one == 1)
    {
        cyes;
        return;
    }
    if (zero_zero == 1)
    {
        if (s[0] == '1' || s[n - 1] == '1')
            cyes;
        else
            cno;
    }
    else
    {
        if (s[0] == '0' || s[n - 1] == '0')
            cyes;
        else
            cno;
    }
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