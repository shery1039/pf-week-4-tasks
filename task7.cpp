#include <iostream>
using namespace std;

void odd(int number);
void Even(int number);

main()
{
    int number;
    cout << "Enter your number:";
    cin >> number;
    odd(number);
    Even(number);
}

void odd(int number)
{
    if (number % 2 == 0)
    {
        cout << "Number " << number << " "
             << "is even";
    }
}

void Even(int number)
{
    if (number % 2 != 0)
    {
        cout << "Number " << number << " "
             << "is odd";
    }
}