#include <iostream>
using namespace std;

int bill(int price)
{
    int count = 0;
    while (price >= 2048)
    {
        price = price - 2048;
        count++;
        if (price==0)
        {
            printf("%d\n",count);
            return 0;
        }
        
    }
    while (price >= 1024)
    {
        price = price - 1024;
        count++;
        if (price==0)
        {
            printf("%d\n",count);
            return 0;
        }
    }
    while (price >= 512)
    {
        price = price - 512;
        count++;
        if (price==0)
        {
            printf("%d\n",count);
            return 0;
        }
    }
    while (price >= 256)
    {
        price = price - 256;
        count++;
        if (price==0)
        {
            printf("%d\n",count);
            return 0;
        }
    }
    while (price >= 128)
    {
        price = price - 128;
        count++;
        if (price==0)
        {
            printf("%d\n",count);
            return 0;
        }
    }
    while (price >= 64)
    {
        price = price - 64;
        count++;
        if (price==0)
        {
            printf("%d\n",count);
            return 0;
        }
    }
    while (price >= 32)
    {
        price = price - 32;
        count++;
        if (price==0)
        {
            printf("%d\n",count);
            return 0;
        }
    }
    while (price >= 16)
    {
        price = price - 16;
        count++;
        if (price==0)
        {
            printf("%d\n",count);
            return 0;
        }
    }
    while (price >= 8)
    {
        price = price - 8;
        count++;
        if (price==0)
        {
            printf("%d\n",count);
            return 0;
        }
    }
    while (price >= 4)
    {
        price = price - 4;
        count++;
        if (price==0)
        {
            printf("%d\n",count);
            return 0;
        }
    }
    while (price >= 2)
    {
        price = price - 2;
        count++;
        if (price==0)
        {
            printf("%d\n",count);
            return 0;
        }
    }
    while (price >= 1)
    {
        price = price - 1;
        count++;
        if (price==0)
        {
            printf("%d\n",count);
            return 0;
        }
    }
    
}
int main()
{
    int t, price;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &price);
        bill(price);
    }

    return 0;
}
