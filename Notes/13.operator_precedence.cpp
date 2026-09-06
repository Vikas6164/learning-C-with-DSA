#include <iostream>
using namespace std;

/*
============================================================
             OPERATOR PRECEDENCE IN C++
============================================================

Definition:
Operator Precedence decide karta hai ki jab ek expression
mein multiple operators hon, to kaunsa operator pehle
perform hoga.

Simple words:
"Kaam kis order mein hoga?" -> Operator Precedence

Ye mathematics ke BODMAS rule jaisa hai.


------------------------------------------------------------
PRECEDENCE TABLE (HIGH -> LOW)
------------------------------------------------------------

1.  ( ) [ ]
    Parentheses / Brackets
    Highest precedence

2.  ++  --
    Postfix increment / decrement

3.  ++  --
    Prefix increment / decrement

4.  *   /   %
    Multiplication, Division, Modulus

5.  +   -
    Addition, Subtraction

6.  <   <=   >   >=
    Relational operators

7.  ==  !=
    Equality operators

8.  &&
    Logical AND

9.  ||
    Logical OR

10. ?:
    Conditional operator

11. =
    Simple assignment

12. +=  -=  *=  /=
    Shorthand assignment operators

13. ,
    Comma operator
    Lowest precedence


------------------------------------------------------------
IMPORTANT:
Higher precedence wala operator pehle perform hota hai.

Example:

int result = 10 + 5 * 2;

* ki precedence + se higher hai.

Step 1: 5 * 2 = 10
Step 2: 10 + 10 = 20

Output:
20


------------------------------------------------------------
PARENTHESIS CAN CHANGE THE ORDER
------------------------------------------------------------

int result = (10 + 5) * 2;

Normally * pehle hota.

Lekin ( ) ki precedence highest hai,
isliye pehle:

10 + 5 = 15

Then:

15 * 2 = 30

Output:
30


------------------------------------------------------------
QUICK MEMORY ORDER
------------------------------------------------------------

( )
↓
++ --
↓
* / %
↓
+ -
↓
< <= > >=
↓
== !=
↓
&&
↓
||
↓
?:
↓
=
↓
+= -= *= /=
↓
,

Top = Higher precedence
Bottom = Lower precedence


============================================================
EXAMPLE PROGRAM
============================================================
*/

int main()
{
    // Example 1: Multiplication before Addition
    int result1 = 10 + 5 * 2;

    cout << "10 + 5 * 2 = " << result1 << endl;
    // 5 * 2 is performed first
    // 10 + 10 = 20


    // Example 2: Parentheses change precedence
    int result2 = (10 + 5) * 2;

    cout << "(10 + 5) * 2 = " << result2 << endl;
    // (10 + 5) is performed first
    // 15 * 2 = 30


    // Example 3: *, / have higher precedence than +, -
    int result3 = 20 - 6 / 2;

    cout << "20 - 6 / 2 = " << result3 << endl;
    // 6 / 2 = 3
    // 20 - 3 = 17


    // Example 4: Same precedence
    int result4 = 10 + 5 - 3;

    cout << "10 + 5 - 3 = " << result4 << endl;
    // + and - have same precedence.
    // They are evaluated from LEFT to RIGHT.
    // 10 + 5 = 15
    // 15 - 3 = 12

    return 0;
}