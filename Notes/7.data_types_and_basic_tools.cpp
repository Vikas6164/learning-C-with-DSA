#include <iostream>
#include <iomanip>      // setprecision()

using namespace std;

int main ()
{

// ============================================================================
//                  PRIMITIVE / FUNDAMENTAL DATA TYPES
// ============================================================================
//
// C++ terminology mein "fundamental types" more accurate term hai.
//
// Fundamental types mein:
//
//     void
//     nullptr_t
//     integral types
//     floating-point types
//
// aate hain.
//
// ============================================================================


// ============================================================================
// A. bool
// ============================================================================
//
// bool sirf do logical values represent karta hai:
//
//     true
//     false
//
// Example:

bool isStudent = true;


// ============================================================================
// B. char
// ============================================================================
//
// Single character store karta hai.
//
// Example:

char grade = 'A';


// IMPORTANT:
//
//     'A'       -> character literal
//     "A"       -> string literal
//
// Dono different hain.
//
// ============================================================================


// ============================================================================
// C. INTEGER TYPES
// ============================================================================
//
// Integer types whole numbers store karte hain.
//
// Main integer types:
//
//     short
//     int
//     long
//     long long
//
// Inke signed/unsigned versions bhi hote hain.
//
// Examples:

short smallNumber = 10;

int age = 20;

long population = 100000L;

long long bigNumber = 9000000000LL;


// ============================================================================
// SIGNED vs UNSIGNED
// ============================================================================
//
// signed -> positive + negative values
//
// unsigned -> only non-negative values
//
// Example:

signed int temperature = -10;

unsigned int marks = 100;


// IMPORTANT:
// Exact size/range implementation aur platform par depend kar sakta hai.
// Minimum guarantees standard provide karta hai.
//
// ============================================================================


// ============================================================================
// D. FLOATING-POINT TYPES
// ============================================================================
//
// Decimal/fractional values ke liye:
//
//     float
//     double
//     long double
//
// Example:

float percentage = 85.5f;

double price = 999.99;

long double preciseValue = 123.456789L;


// Generally:
//
// float       -> less precision
// double      -> more precision
// long double -> implementation-dependent extended precision
//
// ============================================================================


// ============================================================================
// E. void
// ============================================================================
//
// void ka matlab hai "no value".
//
// Example:
//
//     void display()
//     {
//
//     }
//
// Function kuch return nahi kar raha.
//
// IMPORTANT:
// void ka normal object create nahi kar sakte:
//
//     void x;      // ❌ Invalid
//
// ============================================================================


// ============================================================================
// F. nullptr_t
// ============================================================================
//
// C++11 se available.
//
// nullptr ka type std::nullptr_t hota hai.
//
// nullptr ka use null pointer ko represent karne ke liye hota hai.
//
// Example:
//
//     int* ptr = nullptr;
//
// Ye pointers mein detail se baad mein padhenge.
//
// ============================================================================


// ============================================================================
//                          << endl
// ============================================================================
//
// endl ka full idea:
//
//     END LINE
//
// std::endl output stream mein newline insert karta hai aur
// stream ko FLUSH bhi karta hai.
//
// Example:
//
//     cout << "Hello" << endl;
//     cout << "World";
//
// OUTPUT:
//
//     Hello
//     World
//
//
//
// Difference:
//
//     '\n'    -> newline
//
//     endl    -> newline + flush
//
// Normally simple output mein '\n' often preferred hota hai,
// jab flush ki specifically zarurat na ho.
//
// ============================================================================


// ============================================================================
//                          sizeof()
// ============================================================================
//
// sizeof operator kisi type ya object ka size BYTES mein batata hai.
//
// Example:
//
//     sizeof(int)
//
// ya:
//
//     int age;
//     sizeof(age)
//
//
//
// IMPORTANT:
// sizeof ka result bytes mein hota hai.
//
// Example:

cout << sizeof(int) << endl;


// Variable ke saath:

int number = 100;

cout << sizeof(number) << endl;


// Data type ka size compiler/platform par depend kar sakta hai.
//
// Isliye blindly assume mat karo:
//
//     int = always 4 bytes
//
// Common systems par 4 bytes ho sakta hai, lekin C++ standard
// exact universal size guarantee nahi karta.
//
// ============================================================================


// ============================================================================
//                      5. setprecision()
// ============================================================================
//
// setprecision() output ki precision control karne ke liye use hota hai.
//
// Iske liye:
//
//     #include <iomanip>
//
// chahiye.
//
// Example:
//
//     cout << setprecision(4) << 3.1415926;
//
// Output generally:
//
//     3.142
//
//
// IMPORTANT:
// Default mode mein setprecision() significant digits ko control
// karta hai.
//
// Agar decimal places fixed chahiye, to fixed ke saath use karo:
//
//     cout << fixed << setprecision(2) << 3.1415926;
//
// Output:
//
//     3.14
//
// ============================================================================


// ============================================================================
//                      COMPLETE EXAMPLE
// ============================================================================


    // -------------------------
    // Data Types
    // -------------------------

    int age = 20;

    double percentage = 87.45678;

    char grade = 'A';

    bool passed = true;


    // -------------------------
    // endl
    // -------------------------

    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;


    // -------------------------
    // sizeof()
    // -------------------------

    cout << "Size of int: "
         << sizeof(int)
         << " bytes"
         << endl;


    cout << "Size of age variable: "
         << sizeof(age)
         << " bytes"
         << endl;


    // -------------------------
    // setprecision()
    // -------------------------

    cout << setprecision(5);
    cout << percentage << endl;


    // fixed + setprecision
    //
    // Isse decimal point ke baad exactly 2 digits show karenge.

    cout << fixed << setprecision(2);
    cout << percentage << endl;


    return 0;
}