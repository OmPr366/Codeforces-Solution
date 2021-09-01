#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    if (m>n)
    {
        cout<<-1<<endl;
    }else{
        int s = floor(n/2);
        if (n%2==0)
        {
             s = n/2;
        }else {
             s = (n/2)+1;
        }
        

        for (int i = s; i <= n; i++)
        {
            if(i%m==0){
                cout<<i;
                break;
            }
        }
        
        
    }
    
    return 0;
}