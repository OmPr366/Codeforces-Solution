#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a, c = 0;
    char str[1000];
    cin >> a;
    cin >> str;
    int len = (strlen(str)) - 1;
    for (int i = 0; i <= len / 2; i++)
    {
        int c = 0;
        if (str[i] != str[len / 2 + i + 1])
        {
            cout << "Here:- " << str[len / 2 + i + 1];
            c = 1;
        }
        if (len - (len/2) > 1)
        {
            
        }
        
    }
    if (c == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}