// Write a C++ program to get a number from the user and print whether 
// it's positive, negative or zero.

#include <iostream>

using namespace std;

int main()
{
    float num ;

    cout << "Enter the number : " ;
    cin >> num ;

    if (num < 0) {
        cout << num << " is a Negative number " << endl ;
    } else if (num > 0) {
        cout << num << " is a Positive number " << endl ;
    } else {
        cout << num << " is a Zero " << endl ;
    }

    return 0;

}