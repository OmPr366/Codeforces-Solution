#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int s, w1, w2, w3, temp;
        cin >> s >> w1 >> w2 >> w3;

        if (w1 > w2)
        {
            temp = w1;
            w1 = w2;
            w2 = temp;
        }
        if (w2 > w3)
        {
            temp = w2;
            w2 = w3;
            w3 = temp;
        }

        if (s >= w1 + w2 + w3)
        {
            cout << "1" << endl;
        }
        else if (s >= w1 + w2)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }
    return 0;
}