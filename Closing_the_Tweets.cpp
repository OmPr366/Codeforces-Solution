#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    int a = 0;
    cin >> a;
    cin >> T;
    int sum =0;
    int flag[a] = {0};
    while (T--)
    {
        string h;
        cin >> h;
        if (h == "CLOSEALL")
            sum = 0;
        else
        {   int x = 0;
            char ch = h.at(h.length() - 1);
            x = ch - '0';
            flag[x - 1] = 1;
            for (int i = 0; i < a; i++)
                sum = sum + flag[i];
            flag[x - 1] = 0;
        }
        cout << sum<<endl;
    }
    return 0;
}