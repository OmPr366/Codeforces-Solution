#include <iostream>
using namespace std;

void pairMe(int a, int b, int c);
int main()
{
    int t, a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        pairMe(a, b, c);
    }

    return 0;
}

void pairMe(int a, int b, int c)
{
    if (a + b == c)
    {
        cout << "YES\n";
    }
    else if (a + c == b)
    {
        cout << "YES\n";
    }
    else if (b + c == a)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}