#include <iostream>
using namespace std;

void Payable(string day, int amount);
void Other_Day_Payable(string day, int amount);

main()
{

    string day;
    cout << "Enter the day of Purcahse: ";
    cin >> day;
    int amount;
    cout << "Enter the total purchase amount : ";
    cin >> amount;

    Other_Day_Payable(day, amount);
    Payable(day, amount);
}

void Payable(string day, int amount)
{
    if (day == "Sunday")
    {
        float calculate = (amount * 10) / 100;
        float calculate1 = amount - calculate;
        cout << "Payable amount: " << calculate1;
    }
}

void Other_Day_Payable(string day, int amount)
{
    if (day != "Sunday")
    {
        cout << "Payable amount: " << amount;
    }
}