#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int val[100][100], max=0, sum =0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cin>>val[i][j];
                if (val[i][j]>max)
                {
                    max = val[i][j];
                    printf("MAx is:- %d",max);
                    sum+= max;
                    printf(" sum is:- %d",sum);
                }
                
            }
            
            
        }
        printf("%d\n",sum-val[0][0]);
        
    }
    

    return 0;
}