#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n ,m;
    cin>>n>>m;
    ll a[m], time  = 0;
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    time  = a[0]-1;
    for (int i = 1; i < m; i++)
    {
        if (a[i]>a[i-1])
        {
            time += (a[i] -a[i-1]);
            
        }else if(a[i]<a[i-1]){         
            time += (n-a[i-1]+1);
            time  += (a[i]-1);
        }
    }
    cout<<time;
    
    return 0;
}