// ====================================================================
//               C++ CONSTANTS AND SYMBOLIC CONSTANTS
// ====================================================================

// CONSTANT:
// ---------
// A constant is a value that CANNOT be changed during the
// execution of a program.

// Example:

    const int age = 20;

// Here:
//     const -> keyword
//     int   -> data type
//     age   -> identifier
//     20    -> value

// After initialization, we cannot change `age`.


// ====================================================================
//                     1. CONSTANT USING `const`
// ====================================================================

// Syntax:
//     const data_type constant_name = value;

// Example:


#include <iostream>
using namespace std;

int main()
{
    const int DAYS_IN_WEEK = 7;

    cout << DAYS_IN_WEEK;

    return 0;
}


// OUTPUT:
// 7

// "DAYS_IN_WEEK" cannot be changed.

// ❌ This is NOT allowed:

//     DAYS_IN_WEEK = 10;

// Because it is a constant.


// ====================================================================
//                     2. WHY USE CONSTANTS?
// ====================================================================

// Constants are useful when a value should remain fixed.

// Examples:
//     - Number of days in a week
//     - Mathematical values
//     - Tax rates
//     - Maximum limits
//     - Conversion values

// Example:


#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.14159;

    double radius = 5;

    double area = PI * radius * radius;

    cout << "Area = " << area;


// Here:

//     PI -> constant
//     radius -> variable

// PI should not accidentally change during the program.


// ====================================================================
//                     3. CONSTANT VARIABLE
// ====================================================================

// Normally:

    int age = 20;

// The value can be changed:

    age = 21;       // Allowed


// But:

    const int age = 20;

// The value cannot be changed:

    age = 21;       // ERROR


// Therefore:

//     Variable  -> value can change
//     Constant  -> value cannot change


// ====================================================================
//                     4. CONSTANT MUST BE INITIALIZED
// ====================================================================

// A const variable normally needs a value when it is declared.

// ✅ Correct:

    const int MAX = 100;

// ❌ Wrong:

    // const int MAX;

// Why?

// Because a const object must have a value that cannot later
// be assigned through normal assignment.


// ====================================================================
//                     5. CONSTANT NAMING CONVENTION
// ====================================================================

// Constants are commonly written in:

//     UPPERCASE

// Examples:

    const int MAX_SIZE = 100;
    const double PI = 3.14159;
    const int DAYS_IN_WEEK = 7;

// This is a naming convention, not a C++ requirement.

return 0 ;

}

// ====================================================================
//                  SYMBOLIC CONSTANT
// ====================================================================

// A symbolic constant is a name that represents a fixed value.

// In traditional C/C++, symbolic constants are commonly created
// using the preprocessor "#define".

// Syntax:

    #define NAME value

// Example:


#include <iostream>
using namespace std;

#define PI 3.14159

int main()
{
    cout << PI;

    return 0;
}


// OUTPUT:
// 3.14159

// Here:

//     PI       -> symbolic name
//     3.14159  -> value

// Before compilation, the preprocessor replaces "PI"
// with "3.14159" wherever it appears.


// ====================================================================
//                     6. #define EXAMPLE
// ====================================================================

#include <iostream>
using namespace std;

#define MAX_MARKS 100

int main()
{
    int marks = 85;

    cout << "Marks = " << marks << endl;
    cout << "Maximum Marks = " << MAX_MARKS;

    return 0;
}


// OUTPUT:
// Marks = 85
// Maximum Marks = 100


// ====================================================================
//               CONST vs SYMBOLIC CONSTANT
// ====================================================================

// CONST:

    const int MAX = 100;

    // - "const" is a C++ keyword.
    // - Creates a typed constant object.
    // - Has a data type.
    // - Follows normal C++ scope and type rules.
    // - Preferred in modern C++ for most constants.


// SYMBOLIC CONSTANT:

    #define MIX 100

    // - "#defin" is a preprocessor directive.
    // - It is handled before compilation.
    // - It is basically text substitution.
    // - It does not create a normal typed variable/object.


// ====================================================================
//                     IMPORTANT DIFFERENCE
// ====================================================================

// Example:

    const int MAX = 100;

// Compiler understands:

    // MAX is an integer constant.


// But:

    #define MAX 100

// Preprocessor basically performs:

    // MAX  --->  100

// before the compiler processes the code.