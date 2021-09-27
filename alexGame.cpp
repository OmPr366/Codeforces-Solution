#include <iostream>
#include <string.h>
using namespace std;

int sequence(string X, string Y);
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string X, Y;
        cin >> X >> Y;
        int a = 0, check=0;
        sequence(X, Y);
        
    }
    return 0;
}
int sequence(string X, string Y){
    int check = 0, a= 0;
    for (int i = 0; i < Y.length(); i++)
    {
        check = 0;
        for (int j = a; j < X.length(); j++)
        {
            if (Y[i]==X[j])
            {
                a = j;
                check = 1;
                break;
            }
            
        }
        if (check == 0)
        {
            cout<<"AlecLost"<<endl;
            return 0;
        }
        
        
    }
    cout<<"AlecWon"<<endl;
    return 0 ;
    
}