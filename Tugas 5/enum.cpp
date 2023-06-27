#include <iostream>
#include <string>

using namespace std;

enum gear
{
    First,
    Netral,
    Second,
    Third,
    Fourth,
    Fifth
};


int main(){
    int gearInput;
    cout << "Input Gear (0-5)";cin >> gearInput;

    gear gearCurrent;
    switch (gearInput)
    {
    case  0:
        gearCurrent = Netral;
        break;
    case 1:
        gearCurrent = First;
        break;
    case 2:
        gearCurrent = Second;
        break;
    case 3:
        gearCurrent = Third;
        break;
    case 4:
        gearCurrent = Fourth;
        break;
    case 5:
        gearCurrent = Fifth;
        break;
    default:
        cout << "invalid gear input !!!";
        return 0;
    }

    cout << "Current Gear: ";
    switch (gearCurrent) {
        case Netral:
            cout << "Neutral";
            break;
        case First:
            cout << "First";
            break;
        case Second:
            cout << "Second";
            break;
        case Third:
            cout << "Third";
            break;
        case Fourth:
            cout << "Fourth";
            break;
        case Fifth:
            cout << "Fifth";
            break;
    }

    cout << endl;

    return 0;
}