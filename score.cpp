#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum=0;
        cin >> n;
        int p[n], s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i] >> s[i];
        }
        int ans[9] = {0};
        for (int i = 0; i < n; i++)
        {
            if (p[i] < 9)
            {
                if (ans[p[i]] < s[i])
                {
                    ans[p[i]] = s[i];
                    
                }
            }
        }
        for (int i = 1; i < 9; i++)
        {
            sum += ans[i];
        }
        cout << sum << endl;
    }

    return 0;
}

