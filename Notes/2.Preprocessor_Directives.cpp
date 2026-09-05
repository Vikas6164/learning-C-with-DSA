#include <iostream>
using namespace std;

// ============================================================================
//                    PREPROCESSOR DIRECTIVES IN C++
// ============================================================================
//
// Preprocessor kya hai?
// ---------------------
// Preprocessor C++ compiler se PEHLE code ko process karta hai.
//
// Simple flow:
//
//     C++ Source Code
//           ↓
//      PREPROCESSOR
//           ↓
//     Modified Source Code
//           ↓
//        COMPILER
//           ↓
//        OBJECT CODE
//
// Preprocessor directives hamesha '#' se start hoti hain.
//
// Example:
//
//     #include <iostream>
//     #define PI 3.14159
//
// IMPORTANT:
// Preprocessor directives ke end mein normally ';' nahi lagta.
//
// ============================================================================


// ============================================================================
// 1. #include
// ============================================================================
//
// Kisi header file ka content program mein include karne ke liye.
//
// Example:
//
//     #include <iostream>
//
// Isse iostream header available ho jata hai aur hum cout/cin use
// kar sakte hain.
//
// < >  -> standard/system header ke liye
// " "  -> apni/custom header file ke liye
//
// Example:
//
//     #include <iostream>
//     #include "myheader.h"
//
// ============================================================================


// ============================================================================
// 2. #define
// ============================================================================
//
// Macro define karne ke liye use hota hai.
//
// Example:
//
//     #define PI 3.14159
//
// Ab preprocessor code mein PI ko 3.14159 se replace karega.
//
// Example:
//
//     #define MAX 100
//
//     int arr[MAX];
//
// IMPORTANT:
// #define compile hone se pehle text replacement karta hai.
// Ye normal C++ variable nahi banata.
//
// ============================================================================


// ============================================================================
// 3. #undef
// ============================================================================
//
// Pehle se defined macro ko remove/undefined karne ke liye.
//
// Example:
//
//     #define MAX 100
//
//     #undef MAX
//
// Ab MAX macro defined nahi hai.
//
// ============================================================================


// ============================================================================
// 4. #if
// ============================================================================
//
// Conditional compilation ke liye.
//
// Agar condition true hai, to uske andar ka code preprocess hoga.
//
// Example:
//
//     #define VERSION 2
//
//     #if VERSION == 2
//         cout << "Version 2";
//     #endif
//
// ============================================================================


// ============================================================================
// 5. #ifdef
// ============================================================================
//
// Check karta hai ki koi macro DEFINED hai ya nahi.
//
// Example:
//
//     #define DEBUG
//
//     #ifdef DEBUG
//         cout << "Debug mode";
//     #endif
//
// DEBUG defined hai, isliye code include hoga.
//
// ============================================================================


// ============================================================================
// 6. #ifndef
// ============================================================================
//
// Check karta hai ki koi macro NOT DEFINED hai ya nahi.
//
// Example:
//
//     #ifndef DEBUG
//         cout << "Debug is not enabled";
//     #endif
//
// DEBUG defined nahi hai -> code include hoga.
//
// IMPORTANT:
// #ifndef header guards mein bahut commonly use hota hai.
//
// ============================================================================


// ============================================================================
// 7. #else
// ============================================================================
//
// #if, #ifdef ya #ifndef ki condition false hone par alternate
// code ke liye.
//
// Example:
//
//     #ifdef DEBUG
//         cout << "Debug ON";
//     #else
//         cout << "Debug OFF";
//     #endif
//
// ============================================================================


// ============================================================================
// 8. #elif
// ============================================================================
//
// "else if" jaisa kaam karta hai.
//
// Example:
//
//     #if VERSION == 1
//         cout << "Version 1";
//     #elif VERSION == 2
//         cout << "Version 2";
//     #else
//         cout << "Unknown Version";
//     #endif
//
// ============================================================================


// ============================================================================
// 9. #endif
// ============================================================================
//
// #if, #ifdef ya #ifndef block ko end karta hai.
//
// Example:
//
//     #ifdef DEBUG
//         cout << "Debug";
//     #endif
//
// ============================================================================


// ============================================================================
// 10. #pragma
// ============================================================================
//
// Compiler ko special instruction dene ke liye.
//
// #pragma ka behavior compiler-specific ho sakta hai.
//
// Example:
//
//     #pragma once
//
// #pragma once ka use header file ko ek hi translation unit mein
// multiple times include hone se rokne ke liye commonly kiya jata hai.
//
// IMPORTANT:
// #pragma once C++ standard ka core directive nahi hai, lekin
// practically almost all modern C++ compilers support karte hain.
//
// ============================================================================


// ============================================================================
// 11. #error
// ============================================================================
//
// Preprocessing ke time programmer-defined error generate karta hai.
//
// Example:
//
//     #ifndef VERSION
//         #error "VERSION must be defined"
//     #endif
//
// Agar VERSION defined nahi hai, compilation error generate hoga.
//
// ============================================================================


// ============================================================================
// 12. #warning
// ============================================================================
//
// Compiler ko warning message dene ke liye.
//
// Example:
//
//     #warning "This code needs improvement"
//
// IMPORTANT:
// #warning standard C++ directive nahi hai; ye compiler extension
// ke roop mein commonly supported hai.
//
// ============================================================================


// ============================================================================
// 13. #line
// ============================================================================
//
// Compiler ko source code ki line number aur filename ko
// change/override karne ke liye.
//
// Example:
//
//     #line 100 "example.cpp"
//
// Iske baad compiler diagnostics mein line number 100 se
// report kar sakta hai.
//
// Ye normally advanced/generated-code situations mein useful hota hai.
//
// ============================================================================


// ============================================================================
// 14. #if 0
// ============================================================================
//
// Ye koi alag directive nahi hai.
// Ye #if ka ek common use hai.
//
// #if 0 ke andar ka code preprocess nahi hota.
//
// Example:
//
//     #if 0
//         cout << "Ye compile nahi hoga";
//     #endif
//
// Iska use temporary code disable karne ke liye kiya ja sakta hai.
//
// ============================================================================


// ============================================================================
//              IMPORTANT PREDEFINED MACROS
// ============================================================================
//
// Kuch macros compiler/preprocessor automatically provide karta hai.
//
// __FILE__  -> current source file ka naam
//
// __LINE__  -> current line number
//
// __DATE__  -> compilation ki date
//
// __TIME__  -> compilation ka time
//
// __cplusplus -> C++ standard/version identify karne ke liye
//
// Example:
//
//     cout << __FILE__ << endl;
//     cout << __LINE__ << endl;
//     cout << __DATE__ << endl;
//     cout << __TIME__ << endl;
//
// ============================================================================

int main()
{
    cout << "Preprocessor Directives";

    return 0;
}