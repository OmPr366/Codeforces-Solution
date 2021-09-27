#include <iostream>
using namespace std;

int main()
{
    int R,O,C, leftBalls, runs, makeRun;
    cin >> R>>O>>C;

    leftBalls =  (20-O)*6;
    runs = R- C;
    makeRun = leftBalls*6;
    if (runs<= makeRun )
    {
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
    
    
    
    return 0;
}