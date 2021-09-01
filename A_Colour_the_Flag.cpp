#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;
        string s[m];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            string str = s[i];
            if (str[0] = '.')
            {
                if (str[1] == 'R')
                {
                    str[0] = 'W';
                }
                else
                    str[0] = 'R';
            }
            
        }
    }
    return 0;
}