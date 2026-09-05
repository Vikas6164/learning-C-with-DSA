// Enter cost of 3 items from the user (using float data type) - a pencil, a
// pen and an eraser. You have to output the total cost of the items back to the user as
// their bill.
// (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced
// problem)

#include <iostream>

using namespace std;

int main()
{
    float pencil , pen , eraser ;

    // Input from the user
    cout << "Cost of pencil : ";
    cin >> pencil ;

    cout << "Cost of pen : ";
    cin >> pen ;

    cout << "Cost of eraser : ";
    cin >> eraser ;

    // Output as a bill
    cout << "\nPrice of pencil : "
         << pencil 
         << "\n"
         << "Price of pen : "
         << pen
         << "\n"
         << "Price of eraser : "
         << eraser ;

    float sum = pencil + pen + eraser;
    cout << "\nSum of items : "
         << sum
         <<endl;
    
    float gst = sum * 0.18;

    cout << "GST (18%) : "
         << gst
         << endl;
    
    float total = sum + gst;
    
    cout << "Total Bill : "
         << total;
         
    return 0;

}