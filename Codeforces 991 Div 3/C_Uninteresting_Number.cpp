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
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }
    if (sum % 9 == 0)
        yes;
    else
    {
        int cnt = 0;
        int f = 0;
        int two = 0, three = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '2')
            {
                two++;
            }
            else if (s[i] == '3')
                three++;
        }
        two = min(two, 8LL);
        three = min(three, 8LL);
        if (two == 0)
        {
            for (int i = 1; i <= three; i++)
            {
                sum += 6;
                if (sum % 9 == 0)
                {
                    yes;
                    return;
                }
            }
            no;
            return;
        }
        for (int i = 0; i <= two; i++)
        {
            for (int j = 0; j <= three; j++)
            {
                if ((sum + (2 * i) + (6 * j)) % 9 == 0)
                {
                    yes;
                    return;
                }
            }
        }
        if ((sum + (2 * two) + (three * 6)) % 9 == 0)
        {
            yes;
            return;
        }
        no;
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