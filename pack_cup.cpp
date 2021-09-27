#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int N, A, Max = 0;
        cin>>N;
        for (int i = 2; i <= N; i++)
        {
            A = (N/i)*i;
            if ((N-A) >=Max)
            {
                Max = i;
            }
            
        }
        cout<<Max<<endl;
        
    }
    

    return 0;
}