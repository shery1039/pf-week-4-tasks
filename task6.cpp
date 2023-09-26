#include <iostream>
using namespace std;

void Fail(int number);
void Pass(int number);

main()
{
    int number;
    cout << "Enter your score:";
    cin >> number;
    Pass(number);
    Fail(number);
}

void Pass(int number)
{

    if (number > 50)
    {
        cout << "Pass";
    }
}

void Fail(int number)
{

    if (number < 50)
    {
        cout << "Fail";
    }
}
