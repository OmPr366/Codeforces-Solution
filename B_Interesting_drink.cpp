#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    int x[n];
    for(auto &a:x)cin>>a;
    int q;
    cin>>q;
    int m[q];
    int count = 0;
    sort(x,x+n);
    for (int i = 0; i < q; i++)
    {
        cin>>m[i];
        count =0;
        for (int j = 0; j < n; j++)
        {
            if (m[i]>=x[j])
            {
                count++;
                
            }else break;
            
        }
        cout<<count<<endl;
        
    }
    
    return 0;
}