#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int s, n;
    cin>>s>>n;
    multimap <int,int> mp;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        mp.insert({x,y});
    }
    
    
    int stren = s;
    for (auto &it:mp)
    {
    //     cout<<stren <<":"<<x[i]<<" ";
        if (stren<=it.first)
        {
            cout<<"NO";
            return 0;
        } 
        stren += it.second;
        // cout<<endl;
    }
    cout<<"YES";
    
    return 0;
}
