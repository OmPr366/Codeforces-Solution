#include <iostream>
using namespace std;

void validTria(int a, int b,int c);
int main()
{
    int t,a,b,c;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin>>a>>b>>c;
        validTria(a,b,c);
    }

    return 0;
}

void validTria(int a, int b,int c){
    if ((a+b+c)==180)
    {
        cout<<"YES\n";
    } else{
        cout<<"NO\n";
    }
    
}