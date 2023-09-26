#include<iostream>
using namespace std;

void calculate(float fuel);
main()
{
    float fuel;
    cout<<"Enter the distance: ";
    cin>>fuel;
    calculate(fuel);
}


void calculate(float fuel)
{
    

    float result=fuel*10;
    cout<<"Fuel Needed "<<result<<endl;
}