#include <iostream>
using namespace std;

// ============================================================================
//                         MAIN FUNCTION IN C++
// ============================================================================
//
// main() function C++ program ka ENTRY POINT hota hai.
//
// Program ki execution generally main() function se start hoti hai.
//
// Simple example:
//
//     int main()
//     {
//         // Program ka code
//     }
//
// ============================================================================


// ============================================================================
// 1. BASIC MAIN FUNCTION
// ============================================================================
//
//     int main()
//     {
//
//     }
//
// Yaha:
//
// int
// ---
// main() function ka RETURN TYPE hai.
//
// main
// ----
// Function ka naam hai.
//
// ()
// --
// Iska matlab abhi main function koi parameter receive nahi kar raha.
//
// { }
// ---
// Curly braces ke andar main function ka BODY hota hai.
//
// ============================================================================


// ============================================================================
// 2. MAIN FUNCTION KA BASIC STRUCTURE
// ============================================================================

int main()
{
    // Ye code program start hone ke baad execute hoga.

    cout << "Hello World";

    return 0;
}


// ============================================================================
// 3. return 0;
// ============================================================================
//
// main() ka return type int hai:
//
//     int main()
//
// Isliye main() ek integer value return kar sakta hai.
//
//     return 0;
//
// ka commonly matlab hota hai:
//
//     "Program successfully complete hua."
//
// Operating system ko ye value mil sakti hai.
//
// 0 generally -> SUCCESS
// non-zero    -> ERROR / abnormal status (commonly)
//
// IMPORTANT:
// Modern C++ mein agar main() ke end tak pahunch jaate hain,
// to return 0 automatically implied hota hai.
//
// Isliye ye bhi valid hai:
//
//     int main()
//     {
//         cout << "Hello";
//     }
//
// Lekin learning aur clarity ke liye abhi:
//
//     return 0;
//
// likhna achhi practice hai.
//
// ============================================================================


// ============================================================================
// 4. KYA main() KO KHUD CALL KARNA PADTA HAI?
// ============================================================================
//
// Nahi.
//
// Hume normally:
//
//     main();
//
// nahi likhna padta.
//
// Program start hone par C++ runtime environment main() ko
// execution ke liye call karta hai.
//
// ============================================================================


// ============================================================================
// 5. MAIN FUNCTION KE PARAMETERS
// ============================================================================
//
// main() ke commonly do standard forms dekhe jaate hain:
//
//     int main()
//     int main(int argc, char* argv[])
//
// --------------------------------------------------------------------------
// FORM 1:
// --------------------------------------------------------------------------
//
//     int main()
//
// Jab hume command-line arguments nahi chahiye.
//
// --------------------------------------------------------------------------
// FORM 2:
// --------------------------------------------------------------------------
//
//     int main(int argc, char* argv[])
//
// Jab program command line se arguments receive karta hai.
//
// argc
// ----
// Argument Count.
//
// Command line arguments ki number/count batata hai.
//
// argv
// ----
// Argument Vector.
//
// Command line arguments ko strings ke form mein contain karta hai.
//
// Example:
//
//     int main(int argc, char* argv[])
//     {
//         cout << argc;
//
//         return 0;
//     }
//
// ============================================================================


// ============================================================================
// 6. MAIN FUNCTION KA EXECUTION FLOW
// ============================================================================
//
// Jab program run hota hai:
//
//     Program Start
//          ↓
//     main() function
//          ↓
//     Statements execute
//          ↓
//     return 0
//          ↓
//     Program End
//
// Example:
//
//     int main()
//     {
//         cout << "A";
//         cout << "B";
//         cout << "C";
//
//         return 0;
//     }
//
// OUTPUT:
//
//     ABC
//
// Execution upar se neeche hoti hai.
//
// ============================================================================


// ============================================================================
// 7. MAIN FUNCTION KO VOID KYU NAHI BANATE?
// ============================================================================
//
// Beginners kabhi-kabhi likhte hain:
//
//     void main()
//
// Standard C++ mein ye correct/standard form nahi hai.
//
// Standard forms mein main() ka return type int hota hai:
//
//     int main()
//
// Isliye hamesha standard C++ code mein:
//
//     int main()
//
// use karo.
//
// ============================================================================


// ============================================================================
// 8. KYA main() KO OVERLOAD KAR SAKTE HAIN?
// ============================================================================
//
// Nahi.
//
// C++ program mein main() ke multiple overloaded versions banana
// allowed nahi hai.
//
// Example:
//
//     int main() { }
//     int main(int x) { }      // ❌ Not allowed as another main
//
// main() ke standard forms limited hain.
//
// ============================================================================


// ============================================================================
//                         QUICK REVISION
// ============================================================================
//
// main() = C++ program ka entry point
//
// int main()
//     ↓
// int      = return type
// main     = function name
// ()       = parameters nahi hain
// { }      = function body
// return 0 = successful termination/status
//
// ============================================================================


int main()
{
    cout << "C++ Program Started";

    return 0;
}