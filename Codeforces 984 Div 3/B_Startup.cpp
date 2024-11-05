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
    int n, k;
    cin >> n >> k;
    vector<int> company(k, 0);
    for (int i = 0; i < k; i++)
    {
        int idx, value;
        cin >> idx >> value;
        idx--;
        company[idx] += value;
    }
    sort(company.begin(), company.end(), greater<int>());
    int ans = 0;
    for (int i = 0; i < min(n, k); i++)
    {
        ans += company[i];
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