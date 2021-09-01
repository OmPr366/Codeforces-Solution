#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, sum = 0, count = 0;
    cin >> n >> k;
    int a[n];
    for (auto &x:a)
    {
        cin >> x;
        sum += x;
    }
    if (sum % k == 0)
    {
        vector<int> vec;
        int exactPost = sum / k, totalPost = 0;
        for (int i = 0; i < n; i++)
        {
            count++;
            totalPost += a[i];
            if (totalPost > exactPost)
            {
                cout << "No" << endl;
                return 0;
            }
            else if (totalPost == exactPost)
            {
                vec.push_back(count);
                count = 0;
                totalPost = 0;
            }
        }
        cout << "Yes" << endl;
        for(auto &a :vec){
            cout<<a<<" ";
        }
        cout << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
    return 0;
}