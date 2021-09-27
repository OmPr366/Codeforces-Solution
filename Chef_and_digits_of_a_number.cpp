#include <iostream>
using namespace std;

int check(string s)
{
    int count = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
            if (count > 1)
            {
                cout << "No" << endl;
                break;
            }
            i++;
            
        }
    }
    if (count ==0)
    {
        cout << "No" << endl;
    }
    else if (count ==1)
    {
        cout << "Yes" << endl;
    }
    
    return 0;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin>>s;
        check(s);
    }
    return 0;
}