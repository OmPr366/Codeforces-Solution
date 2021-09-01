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
        int n, one  = 0, ans = 0, two = 0;
        cin>>n;
        int a[n], c[10]={0};
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if (a[i]!= 1 || a[i]!= 0)
            {
                ans++;
                // cout<<"yfhfhes\n";
            }else if(a[i] == 1){
                one = 1;
                // cout<<"yes\n";
            }
            if (a[i]== 2)
            {
                two++;
            }
        }
        if (one == 0)
        {
            ans =0;
        }
        if (two>1)
        {
            ans += (two-1);
        }
        
        
        cout<<ans<<endl;
        
        
    }
    return 0;
}