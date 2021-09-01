#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int sum = 0;
    int i = a;
    while (i > 0)
    {
        int check =0;
        // cout << "first" << i << " ";
        if (b>i)
        {
            check =1;
            b = i;
        }
        
        for (int j = 1; j <= b; j++)
        {
            sum += 1;
            i -= 1;
            // cout << i << " ";
        }
        // cout <<"\n"<< i << " ";
        if (check==0)
        {
            i += 1;
        }
        
        
        // cout<<i<<endl;
    }
    cout << sum ;

    return 0;
}