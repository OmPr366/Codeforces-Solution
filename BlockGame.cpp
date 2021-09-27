#include <iostream>
using namespace std;

void check(int num);
int main()
{
    int t, num;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> num;
        check(num);
    }

    return 0;
}
void check(int num)
{
    int last=0, sum = 0,temp=num;
    while (temp > 0)
    {
        last = temp % 10;
        sum =(sum * 10) + last;
        temp = temp/10;
    }
    if (num == sum)
    {
        cout<<"wins\n";
    }else{
        cout<<"loses\n";
    }
    
}