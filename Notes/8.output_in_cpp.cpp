/*
============================================================
              OUTPUT IN C++
============================================================

Output ka matlab:
Program ke andar jo result/message hai, usko screen par
display karna = OUTPUT.

C++ me output ke liye mainly:
    cout

`cout` -> console output ke liye use hota hai.

cout ka full form:
    Character OUTput

`cout` <iostream> header file me defined hai.

Isliye:
    #include <iostream>


============================================================
1. BASIC OUTPUT
============================================================
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World";

    return 0;
}

/*
OUTPUT:
Hello World


============================================================
2. `<<` OPERATOR
============================================================

`<<` ko insertion operator kaha jata hai.

Syntax:
    cout << value;

Example:
    cout << 100;

Yaha:
    cout = output stream
    <<   = insertion operator
    100  = output hone wali value


============================================================
3. TEXT OUTPUT
============================================================
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello";
    cout << " Vikas";

    return 0;
}

/*
OUTPUT:
Hello Vikas

Important:
Dono cout statements ka output same line me aayega,
kyunki humne newline nahi diya.


============================================================
4. NEW LINE
============================================================

Output ko next line me lane ke 2 common methods:

Method 1:
    endl

Method 2:
    '\n'
*/


#include <iostream>
using namespace std;

int main()
{
    cout << "Hello" << endl;
    cout << "Vikas";

    return 0;
}

/*
OUTPUT:
Hello
Vikas


============================================================
5. `endl`
============================================================

endl:
    1. New line karta hai
    2. Output stream ko flush karta hai

Syntax:
    cout << "Hello" << endl;

Example:
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Line 1" << endl;
    cout << "Line 2" << endl;
    cout << "Line 3" << endl;

    return 0;
}

/*
OUTPUT:
Line 1
Line 2
Line 3


============================================================
6. `\n`
============================================================

`\n` bhi new line ke liye use hota hai.

Example:
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Line 1\n";
    cout << "Line 2\n";
    cout << "Line 3\n";

    return 0;
}

/*
OUTPUT:
Line 1
Line 2
Line 3

Difference:

    endl -> newline + flush
    \n   -> only newline

Normally simple output me `\n` use karna efficient hota hai.


============================================================
7. MULTIPLE VALUES PRINT KARNA
============================================================

Ek hi cout statement me multiple values print kar sakte hain.

Syntax:
    cout << value1 << value2 << value3;

Example:
*/

#include <iostream>
using namespace std;

int main()
{
    int age = 20;

    cout << "My age is " << age;

    return 0;
}

/*
OUTPUT:
My age is 20

Yaha:

    "My age is " -> string literal
    age          -> variable
    <<           -> insertion operator


============================================================
8. VARIABLE KA OUTPUT
============================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int age = 20;
    double salary = 25000.50;
    char grade = 'A';

    cout << age << endl;
    cout << salary << endl;
    cout << grade << endl;

    return 0;
}

/*
OUTPUT:
20
25000.5
A


============================================================
9. TEXT + VARIABLE
============================================================
*/

#include <iostream>
using namespace std;

int main()
{
    string name = "Vikas";
    int age = 20;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    return 0;
}

/*
OUTPUT:
Name: Vikas
Age: 20


============================================================
10. CALCULATION DIRECTLY OUTPUT KARNA
============================================================

cout ke andar expression bhi likh sakte hain.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << 10 + 20 << endl;
    cout << 50 - 20 << endl;
    cout << 5 * 4 << endl;
    cout << 20 / 5 << endl;

    return 0;
}

/*
OUTPUT:
30
30
20
4

Pehle calculation hoti hai,
phir result screen par print hota hai.


============================================================
11. BOOLEAN OUTPUT
============================================================

By default bool ka output:

    true  -> 1
    false -> 0

Example:
*/

#include <iostream>
using namespace std;

int main()
{
    bool isPassed = true;

    cout << isPassed;

    return 0;
}

/*
OUTPUT:
1


Agar true/false words me chahiye:

    boolalpha

Example:
*/

#include <iostream>
using namespace std;

int main()
{
    bool isPassed = true;

    cout << boolalpha << isPassed;

    return 0;
}

/*
OUTPUT:
true


============================================================
12. `cout` KA BASIC FLOW
============================================================

Program:
    cout << age;

Flow:

    Variable
       ↓
     Value
       ↓
      <<
       ↓
     cout
       ↓
    Screen


============================================================
13. `cout` + `<<` + `endl` COMBINE
============================================================
*/

#include <iostream>
using namespace std;

int main()
{
    string name = "Vikas";
    int age = 20;

    cout << "My name is " << name << endl;
    cout << "My age is " << age << endl;

    return 0;
}

/*
OUTPUT:
My name is Vikas
My age is 20


============================================================
14. IMPORTANT POINT
============================================================

`cout` khud operator nahi hai.

    cout = output stream object

`<<` = insertion operator

Example:

    cout << "Hello";

Isme:

    cout  -> output stream
    <<    -> insertion operator
    "Hello" -> data


============================================================
15. COMMON MISTAKES
============================================================

❌ Wrong:
    cout "Hello";

Because `<<` missing hai.

✅ Correct:
    cout << "Hello";


❌ Wrong:
    cout >> "Hello";

`>>` normally input ke liye `cin` ke saath use hota hai.

✅ Output:
    cout << "Hello";

✅ Input:
    cin >> age;


============================================================
QUICK REVISION
============================================================

OUTPUT IN C++:

1. Output ke liye:
       cout

2. `cout` ke liye:
       #include <iostream>

3. Output operator:
       <<

4. New line:
       endl
       OR
       '\n'

5. Example:
       cout << "Hello";

6. Variable print:
       cout << age;

7. Text + variable:
       cout << "Age: " << age;

8. Calculation:
       cout << 10 + 20;

9. Boolean:
       cout << boolalpha << true;


============================================================
ONE-LINE FORMULA
============================================================

cout << data;

Meaning:

"data ko output stream ke through screen par bhejo."


============================================================
                    END
============================================================
*/