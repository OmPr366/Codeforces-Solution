#include <iostream>
using namespace std;

int main()
{                
    int t;
    cin >> t;
    int sum = 0;
    while (t--)
    {
        int check=0;
        string s1;
        string s2 = "chef";
        cin >> s1;
        for (int i = 0; i < s2.length(); i++)
        {
            for (int j = 0; j < s1.length(); j++)
            {
                if (s2[i] == s1[j] && s2[i + 1] == s1[j + 1])
                {
                    sum++;
                    check++;
                    break;
                }
            }
            
            if (check != 0)
            {
                break;
            }
        }
    }
    cout << sum;
    return 0;
}