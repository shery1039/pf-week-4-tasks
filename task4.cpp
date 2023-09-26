#include<iostream>
using namespace std;




main()
{
    int number1,number2;
    cout<<"Enter your 1st number: ";
    cin>>number1;
    cout<<"Enter your 2nd number: ";
    cin>>number2;

    char op;
    cout<<"Enter one of following function('+' '-' '*' '/'): ";
    cin>>op;

    if(op=='+')
    {
        int result=number1+number2;
        cout<<"Addition is "<<result;
    }

     if(op=='-')
    {
        int result=number1-number2;
        cout<<"Subtraction is "<<result;
    }

     if(op=='*')
    {
        int result=number1*number2;
        cout<<"Multiplication is "<<result;
    }

     if(op=='/')
    {
        int result=number1/number2;
        cout<<"Division is "<<result;
    }
}