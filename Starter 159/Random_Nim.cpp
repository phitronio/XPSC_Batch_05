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
long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        res %= mod;
        a = a * a;
        a %= mod;
        b >>= 1;
    }
    return res;
}
inline int add(int x, int y)
{
    return (x + y >= mod ? x + y - mod : x + y);
}

inline int sub(int x, int y)
{
    return (x - y < 0 ? x - y + mod : x - y);
}

inline int gun(int x, int y)
{
    return ((x * 1ll * y) % mod);
}
inline int inverse(int x)
{
    return binpow(x, mod - 2);
}
inline int vag(int x, int y)
{
    return (x * 1ll * binpow(y, mod - 2)) % mod;
}
void solve()
{
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << gun(d + 1, inverse(2 * d)) << "\n";
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