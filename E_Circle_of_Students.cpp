#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int check = 1;
        for (int i = 1; i < n; i++)
        {
            if (!((abs(arr[i] - arr[i - 1]) == 1 ) || (arr[i] == n && arr[i-1] == 1) || (arr[i] == 1 && arr[i-1 ] ==n)) )
            {
                check=0;
                cout << "NO" << endl;
                break;
            }
        }
        if (check)
        {
            cout<<"YES"<<endl;
        }
        
        
            
    }
    return 0;
} 