#include <iostream>
using namespace std;

// ============================================================================
//             LITERAL, VARIABLE, IDENTIFIER & MEMORY IN C++
// ============================================================================
//
// Is file mein hum 4 basic concepts samjhenge:
//
//     1. Literal
//     2. Variable
//     3. Identifier
//     4. Memory
//
// Ye concepts C++ ke almost har program mein use honge.
// ============================================================================


// ============================================================================
// 1. LITERAL
// ============================================================================
//
// Literal = program ke andar directly likhi hui FIXED VALUE.
//
// Simple words:
//
//     Literal = actual value jo hum directly code mein likhte hain.
//
// Examples:
//
//     10
//     25.5
//     'A'
//     "Hello"
//     true
//
// Yaha 10, 25.5, 'A', "Hello" aur true literals hain.
//
// ============================================================================


// Integer Literal
int age = 20;
//         ^^
//         20 = Integer Literal


// Floating-point Literal
double price = 99.50;
//              ^^^^^
//              99.50 = Floating-point Literal


// Character Literal
char grade = 'A';
//            ^^^
//            'A' = Character Literal


// String Literal
string name = "Vikas";
//              ^^^^^^^
//              "Vikas" = String Literal


// Boolean Literal
bool isStudent = true;
//                ^^^^
//                true = Boolean Literal


// IMPORTANT:
// Literal ki value directly code mein written hoti hai.
//
// Example:
//
//     int x = 100;
//
// 100 = Literal
//
// ============================================================================


// ============================================================================
// 2. VARIABLE
// ============================================================================
//
// Variable = memory mein ek named location jahan hum data store kar sakte hain.
//
// Simple example:
//
//     int age = 20;
//
// Yaha:
//
//     int  -> data type
//     age  -> variable ka naam
//     20   -> literal/value
//
// Variable ki value program ke execution ke dauran change ho sakti hai.
//
// Example:
//
//     int age = 20;
//
//     age = 21;
//
// Ab age ki value 21 ho gayi.
//
// ============================================================================

int marks = 80;

int marks = 90;
// marks ki value ab 90 hai.
//
// IMPORTANT:
// Variable ki value change ho sakti hai.
//
// ============================================================================


// ============================================================================
// 3. IDENTIFIER
// ============================================================================
//
// Identifier = programmer dwara diya gaya naam.
//
// Hum different programming elements ko identify karne ke liye
// names dete hain.
//
// Examples:
//
//     int age;
//
//     age = identifier
//
//     int marks;
//
//     marks = identifier
//
//     int studentAge;
//
//     studentAge = identifier
//
// Functions, variables, classes, objects, etc. ke names identifiers
// ho sakte hain.
//
// ============================================================================


// ============================================================================
//                  RULES OF IDENTIFIERS
// ============================================================================
//
// RULE 1:
// Identifier letters, digits aur underscore (_) contain kar sakta hai.
//
//     age
//     student1
//     student_age
//
//
//
// RULE 2:
// Identifier digit se START nahi ho sakta.
//
//     int 1age;       // ❌ Invalid
//     int age1;       // ✅ Valid
//
//
//
// RULE 3:
// Spaces allowed nahi hain.
//
//     int student age;      // ❌ Invalid
//
//     int studentAge;      // ✅ Valid
//     int student_age;     // ✅ Valid
//
//
//
// RULE 4:
// C++ keywords ko identifier ke naam ke roop mein use nahi kar sakte.
//
//     int int = 10;         // ❌ Invalid
//     int return = 10;      // ❌ Invalid
//
//
//
// RULE 5:
// C++ identifiers CASE-SENSITIVE hote hain.
//
//     age
//     Age
//     AGE
//
// Ye teeno different identifiers hain.
//
// ============================================================================


// ============================================================================
//                 VALID & INVALID IDENTIFIERS
// ============================================================================
//
// VALID:
//
//     age
//     studentAge
//     student_age
//     marks1
//     _value
//
// INVALID:
//
//     1student       // ❌ digit se start
//     student age    // ❌ space
//     student-age    // ❌ '-' allowed nahi
//     int            // ❌ keyword
//
// ============================================================================


// ============================================================================
// 4. MEMORY
// ============================================================================
//
// Computer ke paas RAM hoti hai.
//
// Jab program run hota hai, variables ke liye memory mein space
// allocate ho sakti hai.
//
// Example:
//
//     int age = 20;
//
// Iska simple idea:
//
//     Memory
//     ┌────────────────────┐
//     │        age         │
//     │        20          │
//     └────────────────────┘
//
// "age" ek naam hai jiske through hum stored value ko access karte hain.
//
// IMPORTANT:
// Actual memory address ko samajhne ke liye pointers important hain.
// Pointers hum baad mein detail mein padhenge.
//
// ============================================================================


// ============================================================================
//                 VARIABLE + MEMORY CONNECTION
// ============================================================================
//
// Jab hum likhte hain:
//
//     int age = 20;
//
// To simple understanding ke liye:
//
//     int
//      ↓
//     Compiler ko batata hai ki age kis type ka data store karega.
//
//     age
//      ↓
//     Memory location ko identify/access karne ke liye naam.
//
//     20
//      ↓
//     Stored value.
//
//
//
// Conceptually:
//
//             VARIABLE
//                │
//                ▼
//     ┌─────────────────────┐
//     │       Memory        │
//     │                     │
//     │       value: 20     │
//     └─────────────────────┘
//
// ============================================================================


// ============================================================================
//                 LITERAL vs VARIABLE vs IDENTIFIER
// ============================================================================
//
// Example:
//
//     int age = 20;
//
// Is ek line mein:
//
//     int  → Data Type
//
//     age  → Identifier + Variable name
//
//     20   → Literal
//
//
//
// IMPORTANT:
// Har variable ka naam identifier hota hai,
// lekin har identifier variable nahi hota.
//
// Example:
//
//     class Student
//
// "Student" ek identifier hai,
// lekin ye variable nahi hai.
//
// ============================================================================


// ============================================================================
//                         COMPLETE EXAMPLE
// ============================================================================

int main()
{
    // "25" = literal
    // "age" = identifier / variable name
    int age = 25;

    // "95.5" = literal
    // "marks" = identifier / variable name
    double marks = 95.5;

    // "A" = character literal
    // "grade" = identifier / variable name
    char grade = 'A';

    // "Hello" = string literal
    // "message" = identifier / variable name
    string message = "Hello";

    // Boolean literal
    bool passed = true;

    cout << age << endl;
    cout << marks << endl;
    cout << grade << endl;
    cout << message << endl;
    cout << passed << endl;

    return 0;
}


// ============================================================================
//                         QUICK REVISION
// ============================================================================
//
// LITERAL
// -------
// Code mein directly written fixed value.
//
// Example:
//
//     10
//     3.14
//     'A'
//     "Hello"
//     true
//
//
// VARIABLE
// --------
// Data store karne ke liye named memory location.
//
// Example:
//
//     int age = 20;
//
//
// IDENTIFIER
// ----------
// Programmer dwara diya gaya naam.
//
// Example:
//
//     age
//     marks
//     studentName
//
//
// MEMORY
// ------
// Computer ki storage (RAM) jahan program ke running data ke liye
// space allocate hoti hai.
//
// ============================================================================


// ============================================================================
//                     ONE-LINE MEMORY TRICK
// ============================================================================
//
//     int age = 20;
//
//     int  → WHAT TYPE?
//     age  → WHAT NAME?
//     20   → WHAT VALUE?
//
//     Variable → "age"
//     Identifier → "age"
//     Literal → "20"
//     Memory → jahan age ki value store hoti hai
//
// ============================================================================