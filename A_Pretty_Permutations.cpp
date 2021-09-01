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
        int k = n;
        if (n%2 != 0)
        {
            k = n-3;
        }
        if (n==2)
        {
            cout<<"2 1"<<endl;
        }
        
        else if (n%2 == 0)
        {
            int x = 1;
            for (int i = 0; i <= k/2; i++)
            {
                cout<<x+1<<" "<<x<<" ";
                x+=2;
            }
            
        } else{
            int x = 1;
            for (int i = 1; i <= k/2; i++)
            {
                cout<<x+1<<" "<<x<<" ";
                x+=2;
            }
            cout<<x+1<<" "<<n <<" "<<x;
            
        }
        cout<<endl;
        
        
        
    }
    return 0;
}