#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, num, t, count = 1;

    cin >> t;
    while (t--)
    {
        int node, edge;
        int n,m,num;
        cin >> node >> edge;

        ll cost = 0;
        for (ll i = 0; i < node; ++i)
        {
            cin >> m;
            cost += m;
        }

        if (node <= 2 || node > edge)
        {
            cout << -1 << endl;
            continue;
        }

        cout << cost * 2 << endl;
        for (ll i = 1; i < node; ++i)
        {
            cout << i << " " << i + 1 << endl;
        }
        cout << node << " 1" << endl;
    }
    return 0;
}