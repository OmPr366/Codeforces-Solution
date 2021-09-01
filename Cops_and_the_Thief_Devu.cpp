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
        int M, x, y;
        cin>>M>>x>>y;
        int arr[M], escapeNum= 0;
        for(auto &a:arr) cin>>a;

        sort(arr,arr+M);

        int start = 0 , totalHouses = x*y;  
        for (int i = 0; i < M; i++)
        {
            int backward = arr[i] - start-1;  
            if (backward > totalHouses)
            {
                escapeNum += (backward - totalHouses);
                
            }
            start = totalHouses+ arr[i];
            // cout<<escapeNum<<" ";
            
        }
        if (start < 100)
        {
            escapeNum += (100-start);
        }
        cout<<escapeNum<<endl;
        
        
        
         
    }
    return 0;
}