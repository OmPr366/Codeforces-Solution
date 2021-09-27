#include <iostream>
using namespace std;

int main()
{
    int a , b, diff, lastNum;
    cin>>a>>b;

    diff = a- b;
    lastNum = diff%10;
    if (lastNum == 9)
    {
        diff = diff -1;
    }else{
        diff = diff +1;
    }
    cout<<diff;
    
    return 0;
}