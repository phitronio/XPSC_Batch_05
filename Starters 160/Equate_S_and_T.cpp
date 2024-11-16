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
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    if(s == t)
    {
        cyes;
        return;
    }
    int s_a = 0;
    int t_a = 0;
    for(int i = 0;i<n;i++)
    {
        if(s[i] == 'a')
            s_a++;
    }
    
    for(int i = 0;i<m;i++)
    {
        if(t[i] == 'a')
            t_a++;
    }
    if(t_a != s_a)
    {
        cno;
        return;
    }
    int s_b = 0;
    int t_b = 0;

    for(int i = 0;i<n;i++)
    {
        if(s[i] == 'a')
            break;
        s_b++;
    }
    
    for(int i = 0;i<m;i++)
    {
        if(t[i] == 'a')
            break;
        t_b++;
    }

    if(s_b == t_b)
        cyes;
    else
        cno;


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