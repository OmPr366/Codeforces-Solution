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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int ans=0,count =0;
        for (int i = 0; i < n; i++)
        {
            ans++;
            if (arr[i]<9 && arr[i]>0)
            {
                count++;
            }
            if (count==8)
            {
                break;
            }
            
            
        }
        cout<<ans<<endl;
        
    }
    return 0;
}