#include <iostream>
using namespace std;

void remisCheck(int x, int y);
int main()
{
    int t, a, b;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;
        remisCheck(a,b);
    }

    return 0;
}

void remisCheck(int x, int y)
{
    if (x > y)
    {
        cout << x<<" ";
    }
    else
    {
        cout <<y<< " ";
    }
    cout << x + y << endl;
}