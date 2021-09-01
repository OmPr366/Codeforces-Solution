#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int x, y;
    int sum = 0;
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        if (a[x - 1] <= c && a[y - 1] <= c)
        {
            if (a[x - 1] + a[y - 1]<=c)
            {
                count+=2;
            } else count++;
            
            
           
        }
    }
    cout << count;

    return 0;
}