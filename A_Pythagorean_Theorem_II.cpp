#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            double c = sqrt((i * i) + (j * j));
            if ((int)c == c)
            {
                if (c <= n)
                {
                    count++;
                }
            }
        }
    }
    cout << count;

    return 0;
}