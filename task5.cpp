#include <iostream>
using namespace std;

void Not_eligible(int age);
void eligible(int age);

main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    eligible(age);
    Not_eligible(age);
}

void eligible(int age)
{
    if (age >= 18)
    {
        cout << "You are eligible to vote";
    }
}

void Not_eligible(int age)
{
    if (age < 18)
    {
        cout << "You are not eligible to vote";
    }
}