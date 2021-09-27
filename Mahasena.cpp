#include <iostream>
using namespace std;

int main()
{
    int t, ev=0, od=0,num;
    cin >> t;
    for (int  i = 0; i < t; i++)
    {
        scanf("%d",&num);
        if (num%2==0)
        {
           ev++;
        } else{
            od++;
        }
        
    }
    if (ev>od)
    {
        printf("READY FOR BATTLE\n");
    }else{
        printf("NOT READY\n");
    }
    
    

    return 0;
}