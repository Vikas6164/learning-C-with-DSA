// Print the largest of 2 number .

#include <iostream>

using namespace std ;

int main ()
{
    int a , b ;

    cout << "Enter the first number : " ;
    cin >> a ;

    cout << "Enter the second number : " ;
    cin >> b ;

// Using If-else

    if (a >= b) {
        cout << "Largest number is : " << a << endl ;
    } else {
        cout << "Largest number is : " << b << endl ;
    }


// Using ternary operator

int Largest = (a >= b) ? a : b ;

cout << "Largest number is : " << Largest << endl ;


// Print if a number is Odd or Even.

    int num ;

    cout << "Enter the number : " ;
    cin >> num ;

// Using If-else

    if (num % 2 == 0) {
        cout << "This is Even number : " << num << endl ;
    } else {
        cout << "This is Odd number : " << num << endl ;
    }


// Using ternary operator

string Output = (num % 2 == 0 ) ? "Even" : "Odd" ;

cout << Output << endl ;


// Create an Income Tax Calculator.

// income < 5L
// 0% tax

// income between 5-10L
// 20% tax

// income > 10L
// 30% tax

int income ;
float tax ;

cout << "Your Income is = " ;
cin >> income ;

if (income < 500000) {
    cout << "No tax You have to Pay" << endl ;
} else if (income <1000000) {
    cout << "You have to Pay : " << 0.2* income << endl ;
} else {
    cout << "You have to Pay : " << 0.3* income << endl ;
}


// Print the largest of 3 numbers.

int x , y , z ; 

    cout << "Enter the first number : " ;
    cin >> x ;

    cout << "Enter the second number : " ;
    cin >> y ;

    cout << "Enter the thrid number : " ;
    cin >> z ;

    if (x >= y && x >= z) {
        cout << "The largest Number is : " << x << endl ;
    } else if (y >= z) {
        cout << "The largest Number is : " << y << endl ;
    } else {
        cout << "The largest Number is : " << z << endl ;
    }


    return 0 ;

}