#include <iostream>
using namespace std;

// ============================================================================
//                         NAMESPACE IN C++
// ============================================================================
//
// Namespace ka use names ko organize karne aur NAME COLLISION se bachne
// ke liye hota hai.
//
// Simple example:
//
// Agar do different libraries/classes mein same naam ka function ho:
//
//     print()
//     print()
//
// To compiler confuse ho sakta hai ki kaunsa print() use karna hai.
//
// Namespace naam ko ek "container" ke andar organize kar deta hai.
//
// Example:
//
//     namespace A
//     {
//         int number = 10;
//     }
//
//     namespace B
//     {
//         int number = 20;
//     }
//
// Ab dono ka naam same hai, lekin namespace alag hai:
//
//     A::number
//     B::number
//
// :: ko SCOPE RESOLUTION OPERATOR kehte hain.
//
// ============================================================================


// ============================================================================
//                        NAMESPACE EXAMPLE
// ============================================================================

namespace First
{
    int number = 10;
}

namespace Second
{
    int number = 20;
}

int main()
{
    cout << First::number << endl;
    cout << Second::number << endl;

    // OUTPUT:
    // 10
    // 20

    return 0;
}


// ============================================================================
//                    STANDARD NAMESPACE: std
// ============================================================================
//
// C++ Standard Library ke bahut saare names "std" namespace ke andar hote hain.
//
// Example:
//
//     std::cout
//     std::cin
//     std::string
//     std::vector
//
// Yaha:
//
//     std = namespace
//     ::   = scope resolution operator
//     cout = std namespace ke andar cout
//
// Isliye hum likh sakte hain:
//
//     std::cout << "Hello";
//
// ============================================================================


// ============================================================================
//                    using namespace std;
// ============================================================================
//
// Agar hum har baar std:: nahi likhna chahte:
//
//     std::cout
//     std::cin
//     std::string
//
// To likh sakte hain:
//
//     using namespace std;
//
// Phir:
//
//     cout
//     cin
//     string
//
// likh sakte hain.
//
// Example:
//
//     using namespace std;
//
//     cout << "Hello";
//
// IMPORTANT:
// using namespace std; compulsory nahi hai.
//
// Large projects mein generally explicit:
//
//     std::cout
//     std::string
//
// use karna safer hota hai kyunki name conflicts kam hote hain.
//
// ============================================================================


// ============================================================================
//                    DECLARATION IN C++
// ============================================================================
//
// Declaration ka matlab:
//
//     Compiler ko batana ki koi variable, function, class etc.
//     exist karta hai aur uska type/structure kya hai.
//
// Simple words:
//
//     DECLARATION = "Ye cheez exist karti hai."
//
// ============================================================================


// ============================================================================
//                    VARIABLE DECLARATION
// ============================================================================
//
// Example:
//
//     int age;
//
// Yaha hum compiler ko bata rahe hain:
//
//     age naam ka ek variable hai
//     iska type int hai
//
// Ye declaration hai.
//
// ============================================================================

int age;


// ============================================================================
//                    FUNCTION DECLARATION
// ============================================================================
//
// Example:
//
//     int add(int a, int b);
//
// Isko FUNCTION PROTOTYPE bhi kehte hain.
//
// Hum compiler ko bata rahe hain:
//
//     add naam ka function exist karta hai
//     ye 2 int parameters lega
//     ye int return karega
//
// Lekin yaha function ke andar ka code nahi diya.
//
// ============================================================================


// ============================================================================
//                     DEFINITION IN C++
// ============================================================================
//
// Definition ka matlab:
//
//     Actual entity ko create/implement karna.
//
// Simple words:
//
//     DEFINITION = "Ye cheez exactly kya hai / kaise kaam karti hai."
//
// Variable ke case mein definition memory bhi allocate karti hai.
//
// ============================================================================


// ============================================================================
//                      DECLARATION vs DEFINITION
// ============================================================================
//
// Example:
//
//     extern int age;
//
// Ye declaration hai.
//
// Hum keh rahe hain:
//
//     "age naam ka int variable kahin exist karta hai."
//
// Lekin:
//
//     int age = 20;
//
// Ye definition hai.
//
// Yaha variable create hota hai aur value 20 store hoti hai.
//
// ============================================================================


// ============================================================================
//                 FUNCTION DECLARATION vs DEFINITION
// ============================================================================
//
// DECLARATION:
//
//     int add(int a, int b);
//
// Sirf compiler ko function ke baare mein information di.
//
//
//
// DEFINITION:
//
//     int add(int a, int b)
//     {
//         return a + b;
//     }
//
// Yaha function ka actual implementation diya.
//
// ============================================================================


// ============================================================================
//                    COMPLETE EXAMPLE
// ============================================================================

// ----------------------
// Function Declaration
// ----------------------

int multiply(int a, int b);


// ----------------------
// Variable Definition
// ----------------------

int number = 10;


// ----------------------
// Function Definition
// ----------------------

int multiply(int a, int b)
{
    return a * b;
}


int main()
{
    cout << multiply(5, 4);

    // OUTPUT:
    // 20

    return 0;
}