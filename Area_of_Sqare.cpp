// In a program, input the side of a square. You have to output the area of
// the square.

#include <iostream>

using namespace std;

int main()
{
    int side;
    cout << "The side of the squre is : ";
    cin >> side;
    int Area = side * side;
    cout << "Area of squre is = "
         << Area
         << endl;

    return 0;

}