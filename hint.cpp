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
    int arr[100] = {0}, c = 0;
    for (int i = 0; i < 100; i++)
        arr[i] = i + 1;
    while (T--)
    {
        int m = 0, x = 0, y = 0, h = 0;
        cin >> m >> x >> y;
        int g = x * y;
        while (m--)
        {
            cin >> h;
            int start = 0, end = 0;
            if (h <= g)
            {
                start = 0;
                end = h + g - 1;
            }
            if ((h + g) >= 100)
            {
                start = h - g - 1;
                end = 99;
            }
            if (h > g && (h + g) < 100)
            {
                start = h - g - 1;
                end = h + g - 1;
            }
            for (int i = start; i <= end; i++)
                arr[i] = 0;
        }
        for (int i = 0; i < 100; i++)
        {
            if (arr[i] != 0)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}