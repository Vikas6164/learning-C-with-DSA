#include<iostream>     
using namespace std;    

// ============================================================
//              C++ BOILERPLATE CODE
// ============================================================
//
// Boilerplate code = C++ program ka basic/starter structure.
//
// Ye woh common code hai jo hum bahut saare C++ programs
// mein starting mein likhte hain.
//
// Basic Boilerplate:
// #include<iostream>
// using namespace std;
//
// int main()
// {
//	//Apna code yaha likhenge
//
//	return 0;
// }
//
//=============================================================


//-------------------------------------------------------------
// 1. #include <iostream>
//-------------------------------------------------------------
//
// #include = kisi library/header file ko program mein include
//	      karne ke liye use hota hai.
//
// iostream = Input/Output Stream library.
//
// Iske through hum mainly:
//	cout -> output print karne ke liye
//	cin -> input lene ke liye
//
// use kar sakte hain.
//
// Example:
//
// cout << "Hello";
// cin >> age;
//
//--------------------------------------------------------------


//--------------------------------------------------------------
// 2. using namespace std;
//--------------------------------------------------------------
//
// C++ ki standard libraru ke objects/functions ka namespace
// "std" hota hai.
//
// Agar hum "using namespace std;" likhte hain,
// to hume baar-baar std:: likhne ki zarurat nahi padti.
//
//without using namespace std:
//
// std::cout << "Hello";
// std::cin >> ageg;
//
//with using namespace std:
//
// cout << "Hello";
// Cin >> age;
//
// Improtant:
// "using namespace std;" compulsory nahi hai.
// Ye sirf std:: ko baar-baar likhne se bachata hai.
// ; is statement terminater
//--------------------------------------------------------------


//--------------------------------------------------------------
// 3. int main()
//--------------------------------------------------------------
//
// main() = program ka starting point.
//
// C++ program execution grnrtally main() function se start hota hai.
//
// int = main() function ek integer value return karega.
//
// Isliye:
//
// int main()
//
//--------------------------------------------------------------


//--------------------------------------------------------------
// 4. { }
//--------------------------------------------------------------
//
// Curly braces { } ek block ko define karti hain.
//
// main() ke andar jp code hai, woh in braces ke andar likha
// jata hai.
//
//--------------------------------------------------------------


//--------------------------------------------------------------
// 5. return 0;
//--------------------------------------------------------------
//
// return 0; ka matlab hai ki program successfully execute hua.
//
// main() ka return type "int" hai, isliye hume ek integer
// return karna hota hai.
//
// 0 = successful execution.
//
//--------------------------------------------------------------


//==============================================================
//			COMPLETE EXAMPLE
//==============================================================


int main()
{
	// Ye code main() ke andar execute hoga.

    return 0;

}