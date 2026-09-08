#include <iostream>
using namespace std;

/*
============================================================
             CONDITION STATEMENTS IN C++
============================================================

Condition Statement ka use program mein decision lene ke
liye hota hai.

Simple words:
Agar condition TRUE hai -> ek kaam karo
Agar condition FALSE hai -> doosra kaam karo.


Main Condition Statements:

1. if
2. if - else
3. else if
4. Ternary Operator
5. switch


------------------------------------------------------------
1. if STATEMENT
------------------------------------------------------------

Definition:
if statement tab code execute karta hai jab given
condition TRUE ho.

Syntax:

if (condition)
{
    // code
}

Example:

if (age >= 18)
{
    cout << "Eligible to vote";
}

Agar age >= 18 TRUE hai:
    "Eligible to vote" print hoga.

Agar condition FALSE hai:
    if ke andar ka code execute nahi hoga.


------------------------------------------------------------
2. if - else
------------------------------------------------------------

Definition:
if-else mein:

TRUE  -> if ka code execute hoga
FALSE -> else ka code execute hoga

Syntax:

if (condition)
{
    // TRUE code
}
else
{
    // FALSE code
}

Example:

if (age >= 18)
{
    cout << "Adult";
}
else
{
    cout << "Minor";
}


IMPORTANT:
if-else mein sirf ek branch execute hoti hai.

Condition TRUE:
    if execute
    else skip

Condition FALSE:
    if skip
    else execute


------------------------------------------------------------
3. else if
------------------------------------------------------------

Definition:
Jab humein multiple conditions check karni hoti hain,
tab else if use karte hain.

Syntax:

if (condition1)
{
    // code
}
else if (condition2)
{
    // code
}
else if (condition3)
{
    // code
}
else
{
    // agar sab conditions FALSE hain
}

Program upar se neeche conditions check karta hai.

Jaisi hi koi condition TRUE milti hai,
uska block execute hota hai aur baaki else-if
conditions skip ho jaati hain.

Example:

int marks = 75;

if (marks >= 90)
{
    cout << "A Grade";
}
else if (marks >= 75)
{
    cout << "B Grade";
}
else if (marks >= 60)
{
    cout << "C Grade";
}
else
{
    cout << "D Grade";
}


------------------------------------------------------------
IMPORTANT: Multiple independent if vs else if
------------------------------------------------------------

Multiple if:

if (condition1)
{
    // execute if TRUE
}

if (condition2)
{
    // execute if TRUE
}

Dono conditions TRUE ho sakti hain,
isliye dono blocks execute ho sakte hain.


else if:

if (condition1)
{
    // code
}
else if (condition2)
{
    // code
}

Is chain mein maximum ONE block execute hota hai.


------------------------------------------------------------
4. TERNARY OPERATOR
------------------------------------------------------------

Ternary operator ek short form hai if-else ki.

Isko Conditional Operator bhi kehte hain.

Syntax:

condition ? value_if_true : value_if_false;

Example:

int age = 20;

string result = (age >= 18) ? "Adult" : "Minor";

Agar condition TRUE:
    "Adult"

Agar condition FALSE:
    "Minor"


Structure:

condition
    ?
TRUE value
    :
FALSE value


Example:

int a = 10;
int b = 20;

int max = (a > b) ? a : b;

Agar a > b TRUE:
    max = a

Agar a > b FALSE:
    max = b


IMPORTANT:
Ternary operator ka use generally simple
if-else decisions ke liye kiya jata hai.

Complex logic ke liye normal if-else zyada readable hai.


------------------------------------------------------------
5. switch STATEMENT
------------------------------------------------------------

Definition:
switch ka use ek variable/expression ki value ko
multiple fixed cases ke saath compare karne ke liye hota hai.

Syntax:

switch (expression)
{
    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // no case matched
}


Example:

int day = 2;

switch (day)
{
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    default:
        cout << "Invalid day";
}


------------------------------------------------------------
break IN switch
------------------------------------------------------------

break switch ko turant stop karta hai.

Example:

switch (day)
{
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;
}


Agar day = 2:

case 2 execute hoga
"Tuesday" print hoga
break switch se bahar nikal dega.


------------------------------------------------------------
What happens if break is NOT used?
------------------------------------------------------------

Agar break nahi lagaya, to matching case ke baad
next cases bhi execute ho sakte hain.

Is behavior ko FALL-THROUGH kehte hain.

Example:

switch (number)
{
    case 1:
        cout << "One";

    case 2:
        cout << "Two";

    case 3:
        cout << "Three";
}

Agar number = 1:

One
Two
Three

print ho sakta hai because break nahi hai.


------------------------------------------------------------
default
------------------------------------------------------------

default tab execute hota hai jab koi bhi case
match nahi karta.

Example:

int day = 10;

switch (day)
{
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    default:
        cout << "Invalid day";
}

Output:
Invalid day


============================================================
                 COMPLETE EXAMPLE
============================================================
*/

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;


    // -------------------------------------------------------
    // 1. IF
    // -------------------------------------------------------

    if (age >= 18)
    {
        cout << "\nIF: You are 18 or older.\n";
    }


    // -------------------------------------------------------
    // 2. IF - ELSE
    // -------------------------------------------------------

    if (age >= 18)
    {
        cout << "IF-ELSE: You are an adult.\n";
    }
    else
    {
        cout << "IF-ELSE: You are a minor.\n";
    }


    // -------------------------------------------------------
    // 3. ELSE IF
    // -------------------------------------------------------

    if (age < 13)
    {
        cout << "ELSE-IF: Child\n";
    }
    else if (age < 18)
    {
        cout << "ELSE-IF: Teenager\n";
    }
    else
    {
        cout << "ELSE-IF: Adult\n";
    }


    // -------------------------------------------------------
    // 4. TERNARY OPERATOR
    // -------------------------------------------------------

    string votingStatus =
        (age >= 18) ? "Eligible to vote" : "Not eligible to vote";

    cout << "TERNARY: " << votingStatus << endl;


    // -------------------------------------------------------
    // 5. SWITCH
    // -------------------------------------------------------

    int choice;

    cout << "\nEnter a number (1-3): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "SWITCH: You selected One.\n";
            break;

        case 2:
            cout << "SWITCH: You selected Two.\n";
            break;

        case 3:
            cout << "SWITCH: You selected Three.\n";
            break;

        default:
            cout << "SWITCH: Invalid choice.\n";
    }

    return 0;
}