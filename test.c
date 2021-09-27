#include <stdio.h>
void printPrime(int x, int y);
int main()
{
    
    char name[20];
    gets(name);
    int x, y;
    x = name[0] - 30;
    y = name[0] + 20;
    printf("Here is:- ");
    

    printPrime(x,y);
    return 0;
}

void printPrime(int x, int y)
{
    int c = 0;
    while (x != y)
    {
        int c = 0;
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {

                c++;
            }
        }

        if (c == 2)
        {
            printf("%d, ",x);
        }

        x++;
    }
}