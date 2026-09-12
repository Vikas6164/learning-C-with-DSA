// Write a program to calculate the area of a circle.

#include <iostream>

# define PI 3.14

using namespace std;

int main()
{
    float radius ;

    cout << "The radius of the circle = " ;
    cin >> radius ;

    float Area = PI * radius * radius ;

    cout << "The Area of the circle is : "
         << Area 
         << endl ;

    return 0;

}