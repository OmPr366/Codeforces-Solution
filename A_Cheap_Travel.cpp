#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int ansSum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (m>(n-i))
        {
            m = n-i+1;
            // cout<<m<<"Yes"<<endl;
        }
        
        if (b<m*a) 
        {
            ansSum += b;
            i += (m-1);
            // cout<<ansSum<<endl;
        }else {
            ansSum+=a;
            // cout<<"!";
            // cout<<" "<<i<<endl;
        }
        
    }
    cout<<ansSum;
    
    return 0;
}