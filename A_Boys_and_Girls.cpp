#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    string s;
    cin >> n >> m;
    char maxChar = 'B';
    char minChar = 'G';
    if (n != max(n, m) || n==m)
    {
        maxChar = 'G';
        minChar = 'B';
    }

    for (int k = 1; k <= max(n, m); k++)
    {
        if (k <= n)
        {
            cout<<maxChar;
        }
        if (k <= m)
        {
            cout<<minChar;
        }
    }

    return 0;
}