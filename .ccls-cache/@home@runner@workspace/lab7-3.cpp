//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
    int day = 0;
    int total = 0;
    int daily = 0;
    double average = 0.0;

    while (day < 8)
        {
            cout << "Enter the number of text messages sent on day " << day << ": ";
            cin >> daily;
            total += daily;
        }
        average = total / 7.0;
        cout << "The average number of text messages sent per day is: " << average << endl;

    return 0;
}   //end of main function