// What will be the value of x & y in the following program:

#include <iostream>

using namespace std;

int main()
{

    int a = 63, b = 36;
    bool x = (a < b) ? true : false; // False = x =  0
    int y = (a > b) ? a : b; // y = 63
    cout << x << "," << y << endl; 


// What’ll be the output of the program:

    int v = 5;

    if (++v*5 <= 25) {  // False statement
        cout<<"Hello\n";
    } else {
        cout<<"Bye\n"; // This will be printed
    }

    return 0;

}

