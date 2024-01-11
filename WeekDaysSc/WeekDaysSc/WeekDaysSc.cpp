#include <iostream>
using namespace std;

int main()
{
    cout << "Hello user\n";
    int dayNumber = 0;
    cout << "please enter the day number";
    cin >> dayNumber;

    switch (dayNumber)
    {
    case 1:
        cout << "monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "thursday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturday";
        break;
    case 7:
        cout << "sunday";
        break;

    default:
        cout << "incorrect day number";
        break;
    }
}

