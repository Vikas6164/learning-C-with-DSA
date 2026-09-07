// Build a calculator using Switch for the 4 basic arithmetic operaiton (+, -, *, /)

#include <iostream>

using namespace std;

int main()
{
    float a , b ;
    char Operator ;

    cout << "Enter a = " ;
    cin >> a ;

    cout << "Enter Operator = " ;
    cin >> Operator ;

    cout << "Enter b = " ;
    cin >> b ;

    switch (Operator) {
        case '+' : cout << a + b << endl ;
                break;
        case '-' : cout << a - b << endl ;
                break;
        case '*' : cout << a * b << endl ;
                break;
        case '/' : cout << a / b << endl ;
                break;
        default : cout << "The Operator is INVALID" << endl ;
    }


    return 0;

}