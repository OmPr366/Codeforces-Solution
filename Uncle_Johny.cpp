#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k=0, checkNum=0;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        cin >> k;
        checkNum = num[k-1];
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (num[i]>num[j])
                {
                   int temp = num[i];
                   num[i] = num[j];
                   num[j] = temp;
                }
                
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            if (num[i] == checkNum)
            {
                k =i+1;
                break;
            }
            
        }
        cout<<k<<endl;
        
    }
    return 0;
}
