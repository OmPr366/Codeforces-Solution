#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n] , frq[3] ={0};
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i]==1)
        {
            v1.push_back(i+1);
        }else if (arr[i]==2)
        {
            v2.push_back(i+1);
        } else if (arr[i]==3)
        {
            v3.push_back(i+1);
        }
        frq[arr[i]-1]++;
    }
    int min = n+1;
    for (int i = 0; i < 3; i++)
    {
        if (frq[i] <min)
        {
            min = frq[i];
        }
        
    }
    cout<<min<<endl;
    for (int i = 0; i < min; i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }
    
    
    
    return 0;
}