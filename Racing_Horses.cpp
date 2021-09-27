#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, min ,diff;
        cin >> n;
        int s[n];

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                diff = s[i] - s[j];
                if (diff < 0)
                {
                    diff = -1 * diff;
                }
                if (diff < min)
                {
                    min = diff;
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}