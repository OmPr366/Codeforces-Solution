#include <iostream>
using namespace std;

void checkDiv(int n);
int main()
{
    int num;
    cin >> num;

    checkDiv( num);
    return 0;
}

void checkDiv(int n){
    int max = 0;
    for (int i = 1; i < 10; i++)
    {
        if (n%i == 0)
        {
           if (i>max)
               max = i;
        }
    }
    cout<<max;
}