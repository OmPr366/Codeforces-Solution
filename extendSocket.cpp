#include <iostream>
using namespace std;

int main()
{
    int x, y, free=0, count=1;
    cin>>x>>y;
    free = x;
    while (free<y)
    {
        free = (free-1)+x;
        count++;
    }
    cout<<count;
    return 0;
}