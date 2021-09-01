#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, count = 0;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            if (a > b)
            {
                while (a > b)
                {
                    if (a % 8 == 0 && a / 8 >= b)
                    {
                        a /= 8;
                        count++;
                    }
                    else if (a % 4 == 0 && a / 4 >= b)
                    {
                        a /= 4;
                        count++;
                    }
                    else if (a % 2 == 0 && a / 2 >= b)
                    {
                        a /= 2;
                        count++;
                    }
                    else
                    {
                        cout << "-1" << endl;
                        break;
                    }
                }
            }
            else
            {
                while (a < b)
                {
                    if (a * 8 <= b)
                    {
                        a *= 8;
                        count++;
                    }
                    else if (a * 4 <= b)
                    {
                        a *= 4;
                        count++;
                    }
                    else if (a * 2 <= b)
                    {
                        a *= 2;
                        count++;
                    }
                    else
                    {
                        cout << "-1" << endl;
                       break;
                    }
                }
            }
            if (a==b)
            {
                cout << count << endl;
            }
            
           
        }
            
    }

    return 0;
}