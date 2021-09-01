#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, even = 0, odd = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'X')
        {
            even++;
        }
        else
            odd++;
    }
    int c = 0;
    int chng = 0;
    if (odd > even)
    {
        if (even != n / 2)
        {
            c = (n / 2) - even;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (c == chng)
            {
                break;
            }
            if (s[i] == 'x')
            {
                s[i] = 'X';
                chng++;
            }
            
        }
    }
    else
    {
        if (odd != n / 2)
        {
            c = (n / 2) - odd;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (c == chng)
            {
                break;
            }
            if (s[i] == 'X')
            {
                s[i] = 'x';
                chng++;
            }
            
        }
    }
    cout<<c<<endl;
    cout<<s;

    return 0;
}