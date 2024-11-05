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
    string x = "1100";
    set<int> index;
    int q;
    cin >> q;
    for (int i = 0; i < s.size() - 3; i++)
    {
        if (s.substr(i, 4) == x)
        {
            index.insert(i);
        }
    }
    while (q--)
    {
        int idx;
        char value;
        cin >> idx >> value;
        idx--;
        s[idx] = value;
        if (s.size() < 4)
            no;
        else
        {
            for (int j = idx - 3; j <= idx; j++)
            {
                if (j >= 0 && j <= s.size() - 4)
                {
                    if (s.substr(j, 4) == x)
                    {
                        index.insert(j);
                    }
                    else
                        index.erase(j);
                }
            }
            if (index.size() == 0)
            {
                no;
            }
            else
                yes;
        }
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