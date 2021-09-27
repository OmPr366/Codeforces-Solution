#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        char input;
        cin>>input;
        switch (input)
        {
        case 'B':
            cout<<"BattleShip"<<endl;
            break;
        case 'b':
            cout<<"BattleShip"<<endl;
            break;
        case 'C':
            cout<<"Cruiser"<<endl;
        case 'c':
            cout<<"Cruiser"<<endl;
            break;
        case 'd':
            cout<<"Destroye"<<endl;
            break;
        case 'D':
            cout<<"Destroye"<<endl;
            break;
        case 'F':
            cout<<"Frigate"<<endl;
            break;
        case 'f':
            cout<<"Frigate"<<endl;
            break;
        
        default:
            break;
        }
        
    }
    

    return 0;
}