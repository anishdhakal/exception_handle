/*
    Author  : Anish Dhakal
    Date    : 7th June 2015
    Program : Exceptional Handling using Class My Time
*/

#include <iostream>
#include "MyTime.h"
#include "ValueOutOfRangeException.h"

using namespace std;

int main()
{
    int hour,minute,second;
    cout << "Enter the time [HH:MM:SS]" << endl;
    while (cin >> hour >>minute>> second)
        {
        try
            {
            MyTime t1(hour,minute,second);

             cout << "After One Second" << endl;
             t1.nextSecond();
             t1.toString();

            cout << "\n";
            cout << "After One Minute" << endl;
            t1.nextMinute();
            t1.toString();

            cout <<"\n";
            cout << "After One Hour" << endl;
            t1.nextHour();
            t1.toString();
            }
        catch (ValueOutofRangeException &valueOutofRange)
        {
            cout << "Exception Occured !!! "
                 << valueOutofRange.what() << endl;
        }
        cout << "Enter the time [HH:MM:SS]" << endl;
    }
    cout << endl;
}
