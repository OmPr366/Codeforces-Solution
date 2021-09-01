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
    float sq;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    { 
        int check=90;
        if (arr[i] ==1)
        {
            cout<<"NO"<<endl;
            goto p;
        }
        
        sq = sqrt(arr[i]); //9
        check = 0;
        for (int j = 2; j <= 5; j++)
        {
            if ((int)sq != j && j != n)
            {
                if (arr[i] % j == 0)
                {
                    check = 1;
                    // cout<<"HEre:- "<<j;
                    cout << "NO" << endl;
                    goto x;
                }
            }
            
        
        }
x:
        if (check == 0)
        {

            if (sq == (int)sq)
            {
                cout << "YES" << endl;
            }
            else{
                
                cout << "NO" << endl;}
        }
      p:  
      int srt =0;
    
    
    }

    return 0;
}