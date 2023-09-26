#include<iostream>
using namespace std;

void InchesToFeet(float measurment);

main()
{
    float measurment;
    cout<<"Enter the measurment in inches: ";
    cin>>measurment;
    InchesToFeet( measurment);
}


void InchesToFeet(float measurment)
{
    
    float result=measurment/12;
    cout<<"Equivalent in feet "<<result<<endl;
}