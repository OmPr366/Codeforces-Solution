#include <iostream>
using namespace std;

void checkDur(int M, int S);
int main()
{
    int t, M, S;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin>>M>>S;
        checkDur(M, S);
    }
    

    return 0;
}
void checkDur(int M, int S){
    int loop = M/S;
    cout<<loop<<endl;
}