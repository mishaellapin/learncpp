#include <iostream>

using namespace std;

int main()
{
    cout << "Hello User!\n";
    int dayNumber = 0;
    cout << "please enter the day number";
    cin >> dayNumber;
    if (dayNumber == 1) 
    {
        cout << "monday";
    }
    else if (dayNumber == 2)
    {
        cout << "tuesday";
    }
    else if (dayNumber == 3)
    {
        cout << "wednesday";
    }
    else if (dayNumber == 4)
    {
        cout << "thursday";
    }
    else if (dayNumber == 5)
    {
        cout << "friday";
    }
    else if (dayNumber == 6)
    {
        cout << "saturday";
    }
    else if (dayNumber == 7)
    {
        cout << "sunday";
    }
    else 
    {
        cout << "strange day number please try again";
    }
}
