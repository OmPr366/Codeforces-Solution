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
    int a[n];
    int count = 0, countThree = 0, countOne = 0, countTwo = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == 4)
        {
            count++;
        }
        else if (num == 3)
        {
            countThree++;
        }
        else if (num == 2)
        {
            countTwo++;
        }
        else
            countOne++;
    }
    if (countOne >= countThree)
    {
        countOne = countOne - countThree;
        count += countThree;
    }
    else
    {
        countOne = 0;
        count += countThree;
    }
    
    if (countOne > 0)
    {
        if (countTwo > countOne)
        {
            countTwo += countOne/2;
            countOne = countOne%2;
            count ++;
            countTwo--;
            count+= countTwo/2;
            countTwo = countTwo%2;
            count+= countTwo;
        } else {
            count += countOne/4;
            countOne = countOne%2;
        }
    }
cout << count;
    return 0;
}