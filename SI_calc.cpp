// Build a Simple Interest Calculator.

#include <iostream>

using namespace std;

int main()
{
    float p , r , t ;

    // Take data from the user
    cout << "Principle Amount : ";
    cin >> p ;
    cout << "Rate : " ;
    cin >> r ;
    cout << "Time : ";
    cin >> t ;

    // calc SI
    float si = ( p * r * t ) / 100 ;

    cout << "The Simple Interst = " 
         << si 
         << endl;

    return 0;

}