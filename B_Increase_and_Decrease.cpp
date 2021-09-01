#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,a, sum =0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        sum+=a;
    }
    if (sum%n==0)
    {
        cout<<n;
    }else
    
    cout<<n-1;
    
    return 0;
}