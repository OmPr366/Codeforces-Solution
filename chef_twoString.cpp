#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int max= 0, min =0;
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i]=='?'||s2[i]=='?')
            {
                max++;
            }
            else if (s1[i]!='?'||s2[i]!='?')
            {
                if (s1[i] != s2[i])
                {
                    min++;
                    max++;
                }
                
            }
            
            
        }

        cout <<min<<" "<<max<<endl;
        
    }
    return 0;
}