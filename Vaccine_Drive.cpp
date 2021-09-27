#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long int G, P, sumBefore = 0, minDays = 0, maxDays = 0;
        cin >> G >> P;
        int x[10] = {0};
        for (int i = 0; i < 10; i++)
        {
            cin >> x[i];
        }
        if (G != 10)
        {
            for (int i = 9; i >= G; i--)
            {
                sumBefore += x[i];
            }
            if (sumBefore % P == 0)
            {
                minDays = sumBefore / P;
            }
            else
            {
                x[G - 1] += sumBefore % P;
                minDays = sumBefore / P;
            }

            if (x[G - 1] % P == 0)
            {
                maxDays += x[G - 1] / P;
                maxDays = minDays + maxDays;
            }
            else
            {
                maxDays += x[G - 1] / P;
                maxDays = minDays + maxDays + 1;
            }
        }
        else
        {
            minDays = 0;
            if (x[0] % P == 0)
            {
                maxDays = x[0] / P;
            }
            else
            {
                maxDays = x[0] / P + 1;
            }
        }

        cout << minDays + 1 << " " << maxDays << endl;
    }
    return 0;
}