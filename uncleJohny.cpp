#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N, temp, k, num;
        cin >> N;
        int A[N]={0};
        
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        cin >> k;
        num = A[k-1];
        for (int i = 0; i < N-1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                
                if (A[i] > A[j])
                {
                    temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }
        for (int i = 0; i < N; i++)
        {
            if (A[i] == num)
            {
                cout << i+1 << endl;
                break;
            }
            
        }
    }
    return 0;
}