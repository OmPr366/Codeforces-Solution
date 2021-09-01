#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (auto &a : arr)
        cin >> a;
    for (int k = 0; k < d; k++)
    {
        int i =0;
        int temp = arr[0];
        for (i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[i] = temp;
    }
    for (auto &a : arr)
        cout<<a<<" ";

    return 0;
}