#include <iostream>
using namespace std;
void check(int a);
int main()
{
    int t, a;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a;
        check(a);
    }

    return 0;
}
void check(int a)
{
    if (a < 10)
        cout << "Thanks for helping Chef!\n";
    else
        cout << "-1\n";
}