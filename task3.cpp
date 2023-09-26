#include <iostream>
using namespace std;

void Rubik_Cube(int length);

main()
{
    int length;
    cout << "Enter the side length of cube: ";
    cin >> length;
    Rubik_Cube(length);
}

void Rubik_Cube(int length)
{
    

    int result = length * length * 6;
    cout << "Number of stickers needed"
         << " " << result;
}