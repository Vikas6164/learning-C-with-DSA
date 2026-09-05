#include <iostream>
#include <string>

using namespace std;


// ============================================================================
//                         INPUT IN C++
// ============================================================================
//
// Input ka matlab:
// User se program ke andar data/value lena.
//
// C++ mein keyboard se input lene ke liye mainly:
//
//     cin
//
// ka use hota hai.
//
// cin ka full form commonly "character input" samjha jata hai.
//
// cin ka actual type:
//
//     std::istream
//
// ============================================================================


// ============================================================================
//                         1. BASIC INPUT
// ============================================================================
//
// Syntax:
//
//     cin >> variable;
//
// Example:
//
//     int age;
//
//     cin >> age;
//
// Program run hone ke baad user koi number enter karega.
//
// Example:
//
//     Input:
//     20
//
// Ab age ke andar 20 store ho jayega.
//
// ============================================================================

int main()
{
    int age;

    cout << "Enter your age: ";

    cin >> age;

    cout << "Your age is: " << age << endl;


    return 0;
}


// ============================================================================
//                    2. INPUT WITH DIFFERENT DATA TYPES
// ============================================================================
//
// User se input lete waqt variable ka data type important hota hai.
//
// ============================================================================
//
// INTEGER INPUT
// -------------
//
//     int age;
//
//     cin >> age;
//
//
//
// FLOAT INPUT
// -----------
//
//     float percentage;
//
//     cin >> percentage;
//
//
//
// DOUBLE INPUT
// ------------
//
//     double price;
//
//     cin >> price;
//
//
//
// CHARACTER INPUT
// ---------------
//
//     char grade;
//
//     cin >> grade;
//
//
//
// BOOLEAN INPUT
// -------------
//
//     bool value;
//
//     cin >> value;
//
// ============================================================================


// ============================================================================
//                  3. MULTIPLE INPUTS
// ============================================================================
//
// Ek hi statement mein multiple inputs le sakte hain.
//
// Example:
//
//     int age;
//     double marks;
//
//     cin >> age >> marks;
//
// User input:
//
//     20 85.5
//
// First value -> age
// Second value -> marks
//
// ============================================================================


// ============================================================================
//                  4. INPUT WITH DIFFERENT VARIABLES
// ============================================================================

/*

int age;
double marks;
char grade;

cout << "Enter age, marks and grade: ";

cin >> age >> marks >> grade;

Example Input:

20 85.5 A

Ab:

age   = 20
marks = 85.5
grade = 'A'

*/


// ============================================================================
//                  5. cin >> KAHA TAK INPUT LETA HAI?
// ============================================================================
//
// cin >> variable whitespace tak input read karta hai.
//
// Whitespace mein:
//
//     Space
//     Tab
//     Newline
//
// Example:
//
//     string name;
//
//     cin >> name;
//
// User input:
//
//     Vikas Yadav
//
// cin sirf:
//
//     "Vikas"
//
// read karega.
//
// "Yadav" next input ke liye stream mein reh sakta hai.
//
// ============================================================================


// ============================================================================
//                  6. FULL LINE INPUT - getline()
// ============================================================================
//
// Agar hume poori line read karni ho, including spaces,
// to getline() use karte hain.
//
// Syntax:
//
//     getline(cin, variable);
//
// Example:
//
//     string fullName;
//
//     getline(cin, fullName);
//
// Input:
//
//     Vikas Yadav
//
// Ab:
//
//     fullName = "Vikas Yadav"
//
// ============================================================================


// ============================================================================
//                             cin vs getline()
// ============================================================================
//
// cin >> name
// -----------
//
// Space par input stop karta hai.
//
// Input:
//
//     Vikas Yadav
//
// Result:
//
//     Vikas
//
//
//
// getline(cin, name)
// ------------------
//
// Puri line read karta hai.
//
// Input:
//
//     Vikas Yadav
//
// Result:
//
//     Vikas Yadav
//
// ============================================================================


// ============================================================================
//          7. IMPORTANT PROBLEM: cin >> KE BAAD getline()
// ============================================================================
//
// Ye beginner ke liye bahut important hai.
//
// Example:
//
//     int age;
//     string name;
//
//     cin >> age;
//     getline(cin, name);
//
// Agar user enter kare:
//
//     20
//     Vikas Yadav
//
// To getline() kabhi-kabhi empty string read kar lega.
//
// Kyu?
//
// cin >> age ke baad ENTER ka newline character input buffer mein
// reh sakta hai.
//
// Is situation mein:
//
//     cin.ignore();
//
// use kiya ja sakta hai.
//
// Example:
//
//     cin >> age;
//     cin.ignore();
//     getline(cin, name);
//
// ============================================================================


// ============================================================================
//                  8. INPUT + OUTPUT COMPLETE EXAMPLE
// ============================================================================


int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    return 0;
}


// ============================================================================
//                  9. USER INPUT KA FLOW
// ============================================================================
//
// Example:
//
//     int age;
//
//     cin >> age;
//
// Flow:
//
//     Keyboard
//        ↓
//     User enters value
//        ↓
//     Input stream (cin)
//        ↓
//     age variable
//        ↓
//     Memory mein value store
//
// ============================================================================


// ============================================================================
//                  10. INPUT VALIDATION
// ============================================================================
//
// Agar user expected data type ke according input nahi deta,
// to input operation fail ho sakta hai.
//
// Example:
//
//     int age;
//
//     cin >> age;
//
// Agar user enter karta hai:
//
//     abc
//
// To "abc" ko int mein directly convert nahi kiya ja sakta.
//
// Isliye cin ki fail state set ho sakti hai.
//
// Isko hum baad mein:
//
//     cin.fail()
//     cin.clear()
//     cin.ignore()
//
// ke through detail mein padhenge.
//
// ============================================================================


// ============================================================================
//                  11. cin.fail()
// ============================================================================
//
// Check karta hai ki input operation fail hua ya nahi.
//
// Example:
//
//     int age;
//
//     cin >> age;
//
//     if (cin.fail())
//     {
//         cout << "Invalid input";
//     }
//
// ============================================================================


// ============================================================================
//                  12. cin.clear()
// ============================================================================
//
// Agar cin fail state mein chala gaya hai,
// to cin.clear() fail state ko clear karta hai.
//
// Example:
//
//     cin.clear();
//
// Lekin invalid input buffer mein reh sakta hai.
// Uske liye cin.ignore() bhi use kiya ja sakta hai.
//
// ============================================================================


// ============================================================================
//                  13. cin.ignore()
// ============================================================================
//
// Input buffer se unwanted characters ko ignore/discard karne ke liye.
//
// Common example:
//
//     cin >> age;
//     cin.ignore();
//     getline(cin, name);
//
// ============================================================================


// ============================================================================
//                  14. BOOLEAN INPUT
// ============================================================================
//
// bool variable normally 0 ya 1 input ke saath use kiya ja sakta hai:
//
//     bool passed;
//
//     cin >> passed;
//
// Input:
//
//     1
//
// passed = true
//
// Input:
//
//     0
//
// passed = false
//
// Agar true/false words ko directly input karwana hai,
// to boolalpha use kar sakte hain.
//
//     cin >> boolalpha >> passed;
//
// Input:
//
//     true
//
// ============================================================================


// ============================================================================
//                    FINAL PRACTICE PROGRAM
// ============================================================================

int main()
{
    string name;
    int age;
    double marks;

    // User se name lena
    cout << "Enter your full name: ";
    getline(cin, name);

    // User se age lena
    cout << "Enter your age: ";
    cin >> age;

    // User se marks lena
    cout << "Enter your marks: ";
    cin >> marks;

    // Output
    cout << endl;

    cout << "----- Student Information -----" << endl;
    cout << "Name   : " << name << endl;
    cout << "Age    : " << age << endl;
    cout << "Marks  : " << marks << endl;


    return 0;
}