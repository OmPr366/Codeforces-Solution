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
        int a;
        cin>>a;
        int check = 0;
        for (int i = 3; i <= 360; i++)
        {
            if (180*(i-2) == a*i)
            {
                check = 1;
                cout<<"YES"<<endl;
            }
            
        }
        if (check == 0)
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    return 0;
}