#include <iostream>
using namespace std;

void sum(int d, int n);
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int d, n;
        cin >> d >> n;
        sum(d, n);
    }

    return 0;
}

void sum(int d, int n)
{
    int sum = 0;
    for (int i = 0; i < d; i++)
    {
        sum = (n * (n + 1)) / 2;
        n = sum;
        
    }
    cout << n << endl;
}