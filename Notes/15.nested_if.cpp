#include <iostream>
using namespace std;

/*
============================================================
                    NESTED IF IN C++
============================================================

Definition:
Jab ek `if` statement ke andar doosra `if` statement
likha jata hai, use NESTED IF kehte hain.

Simple words:

    if ke andar if
        ↓
    Nested if


------------------------------------------------------------
SYNTAX
------------------------------------------------------------

if (condition1)
{
    // Outer if

    if (condition2)
    {
        // Inner if
    }
}


------------------------------------------------------------
HOW IT WORKS
------------------------------------------------------------

Pehle OUTER if ki condition check hoti hai.

Agar outer condition TRUE hai:
    -> Inner if check hoga.

Agar outer condition FALSE hai:
    -> Inner if check hi nahi hoga.


Flow:

Outer if
   |
   |-- FALSE --> Inner if skip
   |
   |-- TRUE
         |
         --> Inner if
                |
                |-- TRUE  --> Inner code execute
                |
                |-- FALSE --> Inner code skip


------------------------------------------------------------
EXAMPLE
------------------------------------------------------------

Suppose humein check karna hai:

1. Person ki age 18 ya usse zyada hai?
2. Agar age eligible hai, tab citizenship check karo.

if (age >= 18)
{
    if (citizen == true)
    {
        cout << "Eligible";
    }
}

Yahan second condition tabhi check hogi jab
first condition TRUE hogi.


------------------------------------------------------------
NESTED IF vs ELSE IF
------------------------------------------------------------

Nested if:

if (condition1)
{
    if (condition2)
    {
        // code
    }
}

Yahan condition2 tabhi check hoti hai jab
condition1 TRUE ho.


Else-if:

if (condition1)
{
    // code
}
else if (condition2)
{
    // code
}

Yahan conditions alternative choices ki tarah
check hoti hain.


------------------------------------------------------------
REAL-LIFE EXAMPLE
------------------------------------------------------------

ATM example:

Agar card valid hai:
    -> PIN check karo.

Agar PIN correct hai:
    -> Transaction allow karo.

Ye nested decision ka example hai.


============================================================
                  COMPLETE PROGRAM
============================================================
*/

int main()
{
    int age;
    char citizen;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you an Indian citizen? (y/n): ";
    cin >> citizen;


    // -------------------------------------------------------
    // NESTED IF
    // -------------------------------------------------------

    if (age >= 18)
    {
        cout << "\nAge condition is TRUE.\n";

        // This if is INSIDE the outer if.
        // Therefore, this is a NESTED IF.

        if (citizen == 'y')
        {
            cout << "You are eligible to vote.\n";
        }
        else
        {
            cout << "You are not eligible because of citizenship.\n";
        }
    }
    else
    {
        cout << "You are not eligible because you are under 18.\n";
    }

    return 0;
}