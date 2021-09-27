#include <iostream>
using namespace std;

void opCheck(int a, int b);
int main()
{
    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        opCheck(a, b);
    }

    return 0;
}
void opCheck(int a, int b)
{
    if (a > b)
    {
        cout << ">\n";
    }
    else if (a < b)
    {
        cout << "<\n";
    }
    else
    {
        cout << "=\n";
    }
}