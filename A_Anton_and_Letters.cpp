#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    int freq[26] ={0}, count = 0;
    getline(cin,s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] !='{' && s[i] !='}' && s[i] !=','&& s[i] !=' ' )
        {
            freq[s[i]-97]++;
        }
        
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i]>=1)
        {
            count++;
        }
        
    }
    cout<<count;
    
    
    return 0;
}