#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ans = 0;
    for (int i = 0; i < n-1; i++)
    {
        int count=1;
        for (int j = i+1; j < n; j++)
        {
            if (a[j]>=a[j-1])
            {
                /* code */ count++;
            }
            
           
        }
        if (count>ans)
        {
            ans = count;
        }
        
        
    }
    cout<<ans<<endl;
    
    
    return 0;
}