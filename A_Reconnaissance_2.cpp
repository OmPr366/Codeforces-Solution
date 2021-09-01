#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    { 
        int x;
        cin >> x;
        v.push_back(x);
    }
    // for (int i = 0; i < n; i++)
    // {

    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    int index1, index2, minn = 99999;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (((v[j] - v[i]) < minn) && ((v[j] - v[i]) >= 0))
            {
                minn = (v[j] - v[i]);
                // cout<<minn<<endl;
                if (minn == 0)
                {
                    index2 = i + 1;
                    index1 = j + 1;
                }
                else
                {
                    index1 = i + 1;
                    index2 = j + 1;
                }
            }
        }
    }
    cout << index1 << " " << index2;
    return 0;
}