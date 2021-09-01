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
        int x1,x2,y1,y2,z1,z2;
        cin>>x1>>x2>>y1>>y2>>z1>>z2;
        while (1)
        {
            if (x2<x1 )
            {
                cout<<"NO"<<endl;
                break;
            }
            if (y2<y1 )
            {
                cout<<"NO"<<endl;
                break;
            }
            if (z2>z1  )
            {
                cout<<"NO"<<endl;
                break;
            }
            cout<<"YES"<<endl;
            break;
            
        }
        
    }
    return 0;
}