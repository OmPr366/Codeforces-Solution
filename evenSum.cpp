#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 == 0)
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }
    return 0;
}