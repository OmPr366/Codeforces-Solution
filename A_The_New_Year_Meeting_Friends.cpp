#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a, b, c;
    cin>>a>>b>>c;
    int maxi = max(a,max(b,c));
    int mini = min(a,min(b,c));
    int other ;
    if ((maxi==a && mini==b )|| (maxi==b && mini==a))
    {
        other = c;
    }else if ((maxi==b && mini==c)||(maxi==c && mini==b) )
    {
        other = a;
    }else if ((maxi==a && mini==c)||(maxi==c && mini==a))
    {
        other = b;
    }
    cout<<(maxi - other)+(other - mini);
    return 0;
}