#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        float quan, pri, total;
        cin>>quan>>pri;
        total = quan*pri;
        if (quan>1000)
        {
            total = total - (total*10/100);
            printf("%f\n",total);
        } else{
            printf("%f\n",total);
        }
        
        
        
    }

    return 0;
}