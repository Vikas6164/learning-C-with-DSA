// For any 3 digit number check whether it’s an Armstrong number or not. 
// Armstrong number is a number that is equal to the sum of cubes of its digits.
// Eg : 371 is an armstrong number. 
// 3*3*3 + 7*7*7 + 1*1*1 = 371

#include <iostream>

using namespace std;

int main()
{
    int n ;

    cout << "Enter the number : " ;
    cin >> n ;

    int number = n ;

    int digit1 = n % 10;

    n /= 10 ;
    int digit2 = n % 10 ;

    n /= 10 ;
    int digit3 = n % 10 ;

    int sum = digit3 * digit3 * digit3 + digit2 * digit2 * digit2 + digit1 * digit1 * digit1 ;

    if (sum == number) {
        cout << number << " is a Armstrong number" << endl ;
    } else {
        cout << number << " is not a  Armstrong number" << endl ;
    }
    

    return 0;

}