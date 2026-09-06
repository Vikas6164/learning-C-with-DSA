#include <iostream>
using namespace std;

/*
====================================================================
                         OPERATORS IN C++
====================================================================

OPERATOR:
    A symbol that tells the compiler to perform an operation.

    Example:
        a + b

        + -> Operator


OPERAND:
    The value/variable on which an operator works.

    Example:
        a + b

        a -> Operand
        b -> Operand


EXPRESSION:
    Combination of operands and operators that produces a result.

    Example:
        a + b
        10 + 20
        x * 5 + 2


====================================================================
                     1. ARITHMETIC OPERATORS
====================================================================

    +   Addition
    -   Subtraction
    *   Multiplication
    /   Division
    %   Modulus / Remainder

Example:
    10 + 3 = 13
    10 - 3 = 7
    10 * 3 = 30
    10 / 3 = 3       <-- Integer division
    10 % 3 = 1       <-- Remainder


====================================================================
                     2. UNARY OPERATOR
====================================================================

Unary operator works on ONE operand.

Examples:
    ++a
    --a
    -a
    !a

        ++a
         |
      1 operand


====================================================================
                     3. BINARY OPERATOR
====================================================================

Binary operator works on TWO operands.

Example:

    a + b

    a -> Operand
    + -> Operator
    b -> Operand

Examples:
    a + b
    a - b
    a * b
    a > b
    a == b


====================================================================
                 4. INCREMENT & DECREMENT
====================================================================

    ++ -> Increase value by 1
    -- -> Decrease value by 1


PRE-INCREMENT:
    ++a

    First increase
    Then use


POST-INCREMENT:
    a++

    First use
    Then increase


PRE-DECREMENT:
    --a

    First decrease
    Then use


POST-DECREMENT:
    a--

    First use
    Then decrease


MEMORY TRICK:

    PRE  = Pehle change
    POST = Baad me change


====================================================================
                    5. ASSIGNMENT OPERATORS
====================================================================

    =    Assignment
    +=   Add and assign
    -=   Subtract and assign
    *=   Multiply and assign
    /=   Divide and assign
    %=   Modulus and assign

Examples:

    a += 5;

means:

    a = a + 5;


    a -= 5;

means:

    a = a - 5;


====================================================================
                   6. RELATIONAL OPERATORS
====================================================================

Relational operators compare two values.

Result:
    true  -> 1
    false -> 0

    ==   Equal to
    !=   Not equal to
    >    Greater than
    <    Less than
    >=   Greater than or equal to
    <=   Less than or equal to


IMPORTANT:

    =    -> Assignment
    ==   -> Comparison


====================================================================
                    7. LOGICAL OPERATORS
====================================================================

    &&   Logical AND
    ||   Logical OR
    !    Logical NOT


AND (&&):
    Both conditions must be true.

    true && true = true
    true && false = false


OR (||):
    At least one condition must be true.

    true || false = true
    false || false = false


NOT (!):
    Reverses the result.

    !true  = false
    !false = true


====================================================================
*/


int main()
{
    // ================================================================
    // 1. ARITHMETIC OPERATORS
    // ================================================================

    cout << "========== ARITHMETIC OPERATORS ==========" << endl;

    int a = 10;
    int b = 3;

    cout << "Addition       : " << a + b << endl;
    cout << "Subtraction    : " << a - b << endl;
    cout << "Multiplication : " << a * b << endl;
    cout << "Division       : " << a / b << endl;
    cout << "Remainder      : " << a % b << endl;


    // ================================================================
    // INTEGER DIVISION
    // ================================================================

    cout << "\n========== INTEGER DIVISION ==========" << endl;

    cout << "10 / 3 = " << 10 / 3 << endl;

    /*
        Output:
            10 / 3 = 3

        Because both 10 and 3 are integers.

        If decimal result is required:

            10.0 / 3

        OR:

            static_cast<double>(10) / 3
    */

    cout << "10.0 / 3 = " << 10.0 / 3 << endl;


    // ================================================================
    // 2. UNARY OPERATORS
    // ================================================================

    cout << "\n========== UNARY OPERATORS ==========" << endl;

    int x = 5;

    cout << "Original x : " << x << endl;

    cout << "++x        : " << ++x << endl;

    /*
        x was 5.

        ++x:
            First increase x
            x becomes 6
            Then print

        Output:
            6
    */

    cout << "--x        : " << --x << endl;

    /*
        x was 6.

        --x:
            First decrease x
            x becomes 5
            Then print

        Output:
            5
    */


    // ================================================================
    // 3. PRE-INCREMENT
    // ================================================================

    cout << "\n========== PRE-INCREMENT ==========" << endl;

    int pre = 5;

    cout << "Value of ++pre : " << ++pre << endl;
    cout << "Value of pre   : " << pre << endl;

    /*
        Initial:
            pre = 5

        ++pre:
            First increase -> 6
            Then use -> 6

        Final:
            pre = 6
    */


    // ================================================================
    // 4. POST-INCREMENT
    // ================================================================

    cout << "\n========== POST-INCREMENT ==========" << endl;

    int post = 5;

    cout << "Value of post++ : " << post++ << endl;
    cout << "Value of post   : " << post << endl;

    /*
        Initial:
            post = 5

        post++:
            First use -> 5
            Then increase -> 6

        Final:
            post = 6
    */


    // ================================================================
    // 5. PRE-DECREMENT
    // ================================================================

    cout << "\n========== PRE-DECREMENT ==========" << endl;

    int preDec = 5;

    cout << "Value of --preDec : " << --preDec << endl;
    cout << "Value of preDec   : " << preDec << endl;


    // ================================================================
    // 6. POST-DECREMENT
    // ================================================================

    cout << "\n========== POST-DECREMENT ==========" << endl;

    int postDec = 5;

    cout << "Value of postDec-- : " << postDec-- << endl;
    cout << "Value of postDec   : " << postDec << endl;


    // ================================================================
    // 7. ASSIGNMENT OPERATORS
    // ================================================================

    cout << "\n========== ASSIGNMENT OPERATORS ==========" << endl;

    int value = 10;

    cout << "Initial value : " << value << endl;

    value += 5;
    cout << "value += 5    : " << value << endl;

    value -= 3;
    cout << "value -= 3    : " << value << endl;

    value *= 2;
    cout << "value *= 2    : " << value << endl;

    value /= 4;
    cout << "value /= 4    : " << value << endl;

    value %= 3;
    cout << "value %= 3    : " << value << endl;


    // ================================================================
    // 8. RELATIONAL OPERATORS
    // ================================================================

    cout << "\n========== RELATIONAL OPERATORS ==========" << endl;

    int p = 10;
    int q = 5;

    cout << "p == q : " << (p == q) << endl;
    cout << "p != q : " << (p != q) << endl;
    cout << "p > q  : " << (p > q) << endl;
    cout << "p < q  : " << (p < q) << endl;
    cout << "p >= q : " << (p >= q) << endl;
    cout << "p <= q : " << (p <= q) << endl;

    /*
        Output:

        p == q : 0
        p != q : 1
        p > q  : 1
        p < q  : 0
        p >= q : 1
        p <= q : 0

        1 = true
        0 = false
    */


    // ================================================================
    // 9. LOGICAL AND (&&)
    // ================================================================

    cout << "\n========== LOGICAL AND (&&) ==========" << endl;

    int age = 20;

    bool condition1 = age >= 18;
    bool condition2 = age <= 60;

    cout << "age >= 18 : " << condition1 << endl;
    cout << "age <= 60 : " << condition2 << endl;

    cout << "Both true? : "
         << (condition1 && condition2) << endl;

    /*
        && returns true only when BOTH conditions are true.
    */


    // ================================================================
    // 10. LOGICAL OR (||)
    // ================================================================

    cout << "\n========== LOGICAL OR (||) ==========" << endl;

    int marks = 85;

    bool failed = marks < 33;
    bool topper = marks >= 90;

    cout << "Failed : " << failed << endl;
    cout << "Topper : " << topper << endl;

    cout << "Failed OR Topper : "
         << (failed || topper) << endl;

    /*
        || returns true when AT LEAST ONE condition is true.
    */


    // ================================================================
    // 11. LOGICAL NOT (!)
    // ================================================================

    cout << "\n========== LOGICAL NOT (!) ==========" << endl;

    bool isAdult = true;

    cout << "isAdult     : " << isAdult << endl;
    cout << "!isAdult    : " << !isAdult << endl;

    /*
        ! reverses the Boolean value.

        true  -> false
        false -> true
    */


    // ================================================================
    // 12. COMBINING RELATIONAL + LOGICAL OPERATORS
    // ================================================================

    cout << "\n========== COMBINING OPERATORS ==========" << endl;

    int studentAge = 20;

    bool eligible = (studentAge >= 18 && studentAge <= 25);

    cout << "Eligible : " << eligible << endl;

    /*
        Expression:

            studentAge >= 18 && studentAge <= 25

        First:
            studentAge >= 18

        Then:
            studentAge <= 25

        Finally:
            Both conditions are combined using &&.
    */


    // ================================================================
    // FINAL SUMMARY
    // ================================================================

    cout << "\n========== QUICK REVISION ==========" << endl;

    cout << "Arithmetic  : +  -  *  /  %" << endl;
    cout << "Unary       : ++  --  !  +  -" << endl;
    cout << "Assignment  : =  +=  -=  *=  /=  %=" << endl;
    cout << "Relational  : ==  !=  >  <  >=  <=" << endl;
    cout << "Logical     : &&  ||  !" << endl;

    
    return 0;
}