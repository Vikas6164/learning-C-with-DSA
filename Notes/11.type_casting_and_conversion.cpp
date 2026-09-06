// ====================================================================
//                  TYPE CASTING & TYPE CONVERSION
// ====================================================================

// TYPE CONVERSION:
// ----------------
// Ek data type ki value ko doosre data type me convert karna
// = Type Conversion.

// Example:

    int a = 10;
    double b = a;

// Here:
    // int    -> double

// 10 ko int se double me convert kiya gaya.


// ====================================================================
//                     TWO TYPES OF CONVERSION
// ====================================================================

// 1. IMPLICIT CONVERSION
//    -------------------
//    Conversion automatically compiler karta hai.

// 2. EXPLICIT CONVERSION
//    -------------------
//    Conversion programmer khud karta hai.


//                          TYPE CONVERSION
//                               |
//                 ┌─────────────┴─────────────┐
//                 ↓                           ↓
//           IMPLICIT                     EXPLICIT
//         (Automatic)                   (Manual)
//                                             |
//                               ┌─────────────┴─────────────┐
//                               ↓                           ↓
//                          C-style cast               C++ casts
//                          (int)x                    static_cast
//                                                    dynamic_cast
//                                                    const_cast
//                                                    reinterpret_cast


// ====================================================================
//                   1. IMPLICIT CONVERSION
// ====================================================================

// Definition:
// -----------
// Jab compiler automatically ek data type ko doosre data type
// me convert karta hai, use Implicit Conversion kehte hain.

// Isko:
//     Automatic Type Conversion

// bhi kaha jata hai.

// When multiple operators are used in a single statement, it is operator precedence 
// which decides which operation is performed first & so on .
// Bool--> Char--> int--> float-->double

// Example:


#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    double result = num;     // int -> double automatically

    cout << result;

    return 0;
}


// OUTPUT:
// 10

// Actually value internally:

//     int 10
//       ↓
//     double 10.0

// Compiler ne conversion automatically kiya.


// ====================================================================
//                 2. IMPLICIT CONVERSION IN EXPRESSION
// ====================================================================

// Example:

//     int + double

// Agar different types ke operands hain, C++ appropriate
// conversion kar sakta hai.

// Example:

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    double b = 2.5;

    double result = a + b;

    cout << result;

    return 0;
}


// OUTPUT:
// 12.5

// Calculation:

//     10 (int) -> 10.0 (double)

//     10.0 + 2.5
//          ↓
//        12.5


// ====================================================================
//                      EXPLICIT CONVERSION
// ====================================================================

// Definition:
// -----------
// Jab programmer khud specify karta hai ki value ko kis
// data type me convert karna hai, use Explicit Conversion
// kehte hain.

// Isko:
//     Manual Type Conversion
//     Type Casting

// bhi kaha jata hai.


// ====================================================================
//                     C-STYLE CAST
// ====================================================================

// Syntax:

//     (data_type)value

// Example:

    double x = 10.5;

    int y = (int)x;


// Here:

    // double -> int


// Example:


#include <iostream>
using namespace std;

int main()
{
    double num = 10.75;

    int result = (int)num;

    cout << result;

    return 0;
}


// OUTPUT:
// 10

// IMPORTANT:
// Decimal part ".75" remove ho gaya.

//     10.75
//       ↓
//      int
//       ↓
//       10


// ====================================================================
//                     C++ STYLE CAST
// ====================================================================

// Modern C++ me explicit conversion ke liye
// "static_cast" commonly preferred hai.

// Syntax:

//     static_cast<data_type>(value)


// Example:

    double num = 10.75;

    int result = static_cast<int>(num);


// ====================================================================
//                     7. static_cast
// ====================================================================


#include <iostream>
using namespace std;

int main()
{
    double num = 10.75;

    int result = static_cast<int>(num);

    cout << result;

    return 0;
}


// OUTPUT:
// 10


// Meaning:

    // static_cast<int>(num)

// means:

    // "num ki value ko int type me convert karo."


// ====================================================================
//              8. INTEGER DIVISION PROBLEM
// ====================================================================

// This is VERY IMPORTANT.

// Example:

//     cout << 10 / 3;

// Both values are integers.

// Therefore:

//     10 / 3 = 3

// NOT:

//     3.3333


// Example:


#include <iostream>
using namespace std;

int main()
{
    cout << 10 / 3;

    return 0;
}


// OUTPUT:
// 3


// Why?

//     10 -> int
//     3  -> int

//     int / int
//        ↓
//       int
//        ↓
//        3


// ====================================================================
//              9. SOLVING INTEGER DIVISION USING CASTING
// ====================================================================

// Agar decimal result chahiye:

//     cout << static_cast<double>(10) / 3;

// Now:

//     double / int
//         ↓
//     double / double
//         ↓
//     3.33333...


// Example:


#include <iostream>
using namespace std;

int main()
{
    cout << static_cast<double>(10) / 3;

    return 0;
}


// OUTPUT:
// 3.33333...


// IMPORTANT:

//     static_cast<double>(10)

// changes 10 from:

//     int -> double


// Then:

    // 10.0 / 3
    //    ↓
    // 3.33333...



// ====================================================================
//                   12. DATA LOSS
// ====================================================================

// Conversion can sometimes lose information.

// Example:

//     double -> int

//     10.75 -> 10

// The decimal part is discarded.

// Example:


#include <iostream>
using namespace std;

int main()
{
    double price = 99.99;

    int roundedDown = static_cast<int>(price);

    cout << roundedDown;

    return 0;
}


// OUTPUT:
// 99


// IMPORTANT:

//     Floating-point -> Integer

// can lose the fractional/decimal part.


// ====================================================================
//                  13. WIDENING CONVERSION
// ====================================================================

// Generally, conversion from a type that can represent a
// smaller range/precision to a wider type can preserve the
// value.

// Example:

//     int -> double

//     10 -> 10.0

// This is often called:

//     Widening Conversion


// Example:

    int a = 100;
    double b = a;


// ====================================================================
//                      NARROWING CONVERSION
// ====================================================================

// Conversion to a type with less range or precision may
// lose information.

// Example:

//     double -> int

//     10.75 -> 10

// This is called:

//     Narrowing Conversion


// ====================================================================
//                   IMPORTANT C++ CASTS
// ====================================================================

// C++ provides four named casts:

// 1. static_cast
//    -> Common conversions such as numeric conversions.

// 2. dynamic_cast
//    -> Mainly used with polymorphic classes.

// 3. const_cast
//    -> Adds/removes const qualification.

// 4. reinterpret_cast
//    -> Low-level reinterpretation of types.

// For beginner-level numeric type conversion:

//         static_cast
//         is the main one to learn