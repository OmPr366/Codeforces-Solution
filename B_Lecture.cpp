#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    map<string, string> ma;
    for (int i = 0; i < m; i++)
    {
        string s1, s2;
        cin>>s1>> s2;
        ma[s1]= s2;
    }
    string lec[n];
    for (int i = 0; i < n; i++)
    {
        cin>>lec[i];
    }

    for (int i = 0; i < n; i++)
    {
        auto check = ma.find(lec[i]);
        string c1 = check->first;
        string c2 = (*check).second;
        if (c1.length()>c2.length())
        {
            cout<<c2<<" ";
        }else cout<<c1<<" ";
        
    }
    
    
    
    
    return 0;
}