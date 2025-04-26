//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by <Fidel Cruz> on <4/26/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int year = 0;
    double sales = 0.0;
    const double RATE = 0.055;
    const double TARGET = 150000.00;

    cout << "Current sales: $ ";
    cin >> sales;
    cout << endl;

    if (sales <= 0){
        cout << "Sales must be greater than $0.00" << endl;
        return 0;
    }

        if (sales >= TARGET){
            cout << "Sales have already reached the target." << endl;
            cout << "Current sales: $" << sales << endl;
            return 0;
        }
    double projectedSales = sales;
    while (projectedSales < TARGET){
        projectedSales += projectedSales * RATE;
        year += 1;
    }

    cout << fixed << setprecision(2);
    cout << "The number of years required to reach the target is: " << year << endl;
    cout << "The sales at that time will be: $" << projectedSales << endl;
    
        
    return 0;
} //end of main function
