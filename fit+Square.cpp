#include <iostream>
using namespace std;

int check(int n);
int main()
{
    int t;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n<=10000)
        {
            check(n);
        }
        
        
    }

    return 0;
}
int check(int n)
{
    int a = n / 2, check, sum = 0, k = 2;
        check = (n - k) / 2;
        sum = (check*(check+1))/2;
        cout<<sum<<endl;
        return 0;
}