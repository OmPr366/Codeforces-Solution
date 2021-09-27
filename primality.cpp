#include <iostream>
using namespace std;

void checkPrime(int num);
int main()
{
    int t,num;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin>>num;
        checkPrime(num);
    }
    

    return 0;
}

void checkPrime(int num){
    int i, c =0;
    for (i = 2; i <= num/2; i++)
    {
        if (num%i==0)
        {
            c =1;
            break;
        }
        
    } if (c ==1 )
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }
    
}