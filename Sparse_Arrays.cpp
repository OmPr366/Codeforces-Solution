#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s[n];
    for(auto &a:s) cin>>a;
    int m;
    cin >> m;
    string q[m];
    for(auto &a:q) cin>>a;
    int count =0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (q[i]==s[j])
            {
                count++;
            }
            
        }
        cout<<count<<endl;
        count = 0;
        
    }
    
    return 0;
}