#include <iostream>
using namespace std;

void calculate1(float fuel);
void calculate(float fuel);

main()
{
    float fuel;
    cout << "Enter the distance: ";
    cin >> fuel;
    calculate(fuel);
    calculate1(fuel);
}

void calculate(float fuel)
{
    float result = fuel * 10;
    if (result > 100)
    {
        cout << "Fuel Needed " << result << endl;
    }
}

void calculate1(float fuel)
{
    float result = fuel * 10;
    if (result < 100)
    {
        cout << "Fuel Needed " << 100 << endl;
    }
}