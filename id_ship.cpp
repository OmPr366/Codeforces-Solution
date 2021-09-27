#include <iostream>
using namespace std;

class ship{
    int name[30];
public:
    void check(char x){
        switch (x)
        {
        case 'B'&&'b':
            cout<<"BattleShip";
            break;
        case 'C':
            cout<<"Cruiser";
            break;
        case 'D':
            cout<<"Destroyer";
            break;
        case 'F'&&'f':
            cout<<"Frigate";
            break;
        
        }
    }
};
int main()
{
    

    return 0;
}