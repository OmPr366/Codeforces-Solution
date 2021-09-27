#include <iostream>
using namespace std;

int checkFour(int n);
int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        checkFour(n);
    }

    return 0;
}
int checkFour(int n)
{
    int last, temp = n, sum = 0, count =0;
    for (int i = 0; i < n; i++)
    {
        last = temp % 10;
        if (last == 4)
        {
            count++;
            
        }
        
        temp = temp/10;
        if (temp < 10)
        {
            if (temp==4)
            {
                count++;
            }
            
            cout<<count<<endl;
            return 0;
        }
        
    }
    return 0 ;
}