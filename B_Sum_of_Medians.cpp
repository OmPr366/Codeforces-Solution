#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin >> T;

    while (T--)
    {
        // int n, k;
        // cin>>n>>k;
        // int a[n*k];
        // for (int i = 0; i < n*k; i++)
        // {
        //     cin>>a[i];

        // }
        // int B[n][k];
        // int add = 0;
        // for (int i = 0; i < k; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         B[i][j] = a[add++];
        //     }

        // }
        // int sum = 0;
        // for (int i = 0; i < k; i++)
        // {
        //     sum += B[i][(n/2)-1];
        //     // cout<<B[i][(n/2)-1]<<" ";
        // }
        // cout<<sum<<endl;

        int n, k;
        cin >> n >> k;
        ll p = n / 2 + 1, sum = 0, input;
        vector<int> v;
        for (int i = 0; i < n * k; i++)
        {
            cin >> input;
            v.push_back(input);
        }

        for (int i = 0; i < n * k; i++)
        {
            cout << v[i] << " ";
        }
        cout<<endl;
        v.push_back(0);
        reverse(v.begin(), v.end());
        for (int i = 0; i < n * k; i++)
        {
            cout << v[i] << " ";
        }

        for (int i = 1; i < k + 1; i++)
        {
            sum += v[p * i];
        }

        cout << sum << endl;
    }
    return 0;
}