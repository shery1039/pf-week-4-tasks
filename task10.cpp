#include <iostream>
using namespace std;

main()
{
    while (true)
    {
        int number1, number2;
        cout << "Enter your 1st number: ";
        cin >> number1;
        cout << "Enter your 2nd number: ";
        cin >> number2;

        char op;
        cout << "Enter one of following function('+' '-' '*' '/'): ";
        cin >> op;

        if (op == '+')
        {
            int result = number1 + number2;
            cout << "Addition is " << result<<endl;
        }

        if (op == '-')
        {
            int result = number1 - number2;
            cout << "Subtraction is " << result<<endl;
        }

        if (op == '*')
        {
            int result = number1 * number2;
            cout << "Multiplication is " << result<<endl;
        }

        if (op == '/')
        {
            int result = number1 / number2;
            cout << "Division is " << result<<endl;
        }
    }
}