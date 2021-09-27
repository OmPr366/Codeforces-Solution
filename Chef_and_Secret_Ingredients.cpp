#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i= 0;
        cin>>n;
        string s[n];
        while (n--)
        {
            cin>>s[i];
            i++;
        }
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < s[i].length(); j++)
            {
                for (int i = 0; i < s[i].length(); i++)
                {
                    /* code */
                }
                
            }
            
        }
        
        
        
    }
    return 0;
}