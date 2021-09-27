#include <iostream>
using namespace std;

int checkNotes(int am)
{
    int c=0;
    while (am >= 100)
    {
        c += am / 100;
        am = am % 100;
        if (am == 0)
        {
            cout << c << endl;
            return 0;
        }
    }
    while (am >= 50)
    {
        c += am / 50;
        am = am % 50;
        if (am == 0)
        {
            cout << c << endl;
            return 0;
        }
    }
    while (am >= 10)
    {
        c += am / 10;
        am = am % 10;
        if (am == 0)
        {
            cout << c << endl;
            return 0;
        }
    }
    while (am >= 5)
    {
        c += am / 5;
        am = am % 5;
        if (am == 0)
        {
            cout << c << endl;
            return 0;
        }
    }
    while (am >= 2)
    {
        c += am / 2;
        am = am % 2;
        if (am == 0)
        {
            cout << c << endl;
            return 0;
        }
    }

    while (am >= 1)
    {
        c += am / 1;
        am = am % 1;
        
    }
    cout << c << endl;
    return 0;
}
int main()
{
    int t, amount;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> amount;
        checkNotes(amount);
    }

    return 0;
}