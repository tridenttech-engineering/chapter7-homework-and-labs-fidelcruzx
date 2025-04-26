//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <Fidel Cruz> on <4/26/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int day = 0;
    int total = 0;
    int daily = 0;
    double average = 0.0;

    for (day = 1; day < 8; day+=1)
        {
            cout << "Enter the number of text messages sent on day " << day << ": ";
            cin >> daily;
            total += daily;
        }
        average = total / 7.0;
        cout << "The average number of text messages sent per day is: " << average << endl;
    
    
    
    return 0;
}   //end of main function