#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin >> T;

    while (T--)
    {
        int n, m, ans = 0;
        cin >> n >> m;
        int t = 0;
        if (n % 2 != 0 )
        {
            n = n - 1;
            t = 1;
        }
        if (n ==0)
        {
            t =0;
        }
        
        if (n > 1)
        {
            ans = (n / 2) * m;
        }
        else{
            if (m%2 !=0)
            {
                m = m+1;
            }
            ans  = m/2;
            
        }
            
        if (t == 1)
        {
            if(m > 1)
            {
                if (m%2!=0)
                {
                    m = m+1;
                }
                
                ans += m/2;
            }
            else ans = 1;
        }
        cout<<ans<<endl;
    }
    return 0;
}