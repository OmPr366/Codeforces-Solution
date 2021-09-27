#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll T;
    cin >> T;
    
    while(T--)
    {
        int D,d, A, B, C, totalAmount;
        cin>>D>>d>>A>>B>>C;
        totalAmount = D*d;
        if (totalAmount>=10 &totalAmount<21)
        {
            cout<<A<<endl;
        } else if (totalAmount>=21 &totalAmount<42)
        {
            cout<<B<<endl;
        }else if (totalAmount>=42 )
        {
            cout<<C<<endl;
        }else{
            cout<<"0"<<endl;
        }
        
    }
    return 0;
}