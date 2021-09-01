#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, i, j;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll maxim = (a / b);
        ll sum = (maxim * (maxim - 1)) / 2;
        ll ans = (a * c) + (d * b * (sum));
        ans += (((a % b)) * maxim * d);
        cout << ans << endl;
    }
    return 0;
}