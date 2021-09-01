#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll T;
    cin >> T;
    
    while(T--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        stack <int>s;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '(')
            {
                s.push(str[i]);
            }else {
                if (s.size() >0)
                {
                    s.pop();
                }
                
            }
            
        }
        cout<<s.size()<<endl;
        
    }
    return 0;
}