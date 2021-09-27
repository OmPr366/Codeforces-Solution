#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a%4==0)
    {
        cout<<++a;
        return 0;
    }
    cout<<--a;
    return 0;

    
}