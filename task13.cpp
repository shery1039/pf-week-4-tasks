#include <iostream>
using namespace std;

main()
{
    while (true)
    {

        string day;
        cout << "Enter the day of Purcahse: ";
        cin >> day;
        int amount;
        cout << "Enter the total purchase amount : ";
        cin >> amount;
        if (day == "Sunday")
        {
            float calculate = (amount * 10) / 100;
            float calculate1 = amount - calculate;
            cout << "Payable amount: " << calculate1 << endl;
        }

        if (day != "Sunday")
        {
            float calculate = (amount * 5) / 100;
            float calculate1 = amount - calculate;
            cout << "Payable amount: " << calculate1 << endl;
        }
    }
}
