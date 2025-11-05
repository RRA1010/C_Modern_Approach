# C Programming (Second Edition)

## 1 Intro

### History of C

### Strengths and Weakness of C

// C programs rely on three key language features:
// directives
// functions
// *statements*
// @Ross: C is imperative


## 2. C Fundamentals

### 2.1 Writing a Simple Program

Compiling and Linking -> Preprocessing -> Compiling -> Linking   

> [Program] -> preprocessor 
> -> [modified Program] -> compiler [object code] 
> -> [object code] + [code to be executable including lib functions] linking`


GCC Compiler
> $ gcc -o pun pun.c

### 2.2 General Form of Simple Program
Directives   
def commands intended for the preprocessor
`#include <stdio.h>`

*statements*   
def command to be executed when the progrum runs   
`;` as terminator

`printf` is display a string literal, `\n` means new-line char.   

### 2.3 Comments

Signle Line   
> /* This is a comment */

Multiline   
> /* Name:
>    Purpose:
>    Author */

C99 Feature   
`// Comment`

### 2.4 Variables

**Types**   
Specifies what kind of data to hold for the variable such as `float`, `int` etc.

**Declarations**   
Declaring variables and their data types. You could also combine or group the variables into a single data type. For example:

> int height, length, width, volume;
> float profit, loss;

> int main(void)
> {
>   declarations
>   *statements*
> }

**Assignment**
Variable given a value -> assignment. Variables are declared first before assigned a value;


**Printing the Value of a Variable**

`%d` = placeholder when printing. `%d` used for int while `%f` is for float. `.2f` for using two decimal points only.

> printf("Height: %d\n", height);

**Computing the Dimensional Weight of a Box**

    int height, length, width, volume, weight;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    //printf("Volume is now %d", volume);
    weight = (volume + 165) / 166;

    // PROGRAM
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Height: %d Length: %d\n", height, length );
    printf("Dimensional weight (pounds): %d\n", weight);

**Initializaiton**

**Printing Expressions**
You could print expressions
> printf("%d\n", height * length * width);

### 2.5 Reading Input

`scanf` to get input. Scan formatted like print formatted w/c req format str to specify what kind of data the scanf will obtain e.g.

> scanf("%d", i); /* reads int; store into i */

dweight2.c

    int main(void)
    {
        int height, length, width, volume, weight;

        printf("Enter height of box: ");
        scanf("%d", &height);
        printf("Enter length of box: ");
        scanf("%d", &length);
        printf("Enter width of box: ");
        scanf("%d", &width);
        
        volume = height * length * width;
        weight = (volume + 165) / 166;
        
        // PROGRAM
        printf("Volume: %d", volume);
        printf("Dimensions: %dx%dx%d\n", length, width, height);
        printf("Height: %d Length: %d\n", height, length );
        printf("Dimensional weight (pounds): %d\n", weight);

        return 0;
    }

### 2.6 Defining Names for Constants

*macrodefinition*
> #define INCHES_PER_POUND 166

`#define` = preprocessing directive like `#include`

#### Converting Fahrenheit to Celsius

    #include <stdio.h>

    #define FREEZING_PT 35.0f
    #define SCALE_FACTOR (5.0f / 9.0f)

    //Fahrenheit to Celsius
    int main(void)
    {
        float fahrenheit, celsius;

        printf("Enter Fahrenheit temperature: ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
        printf("Celsius equivalent: %.1f\n", celsius);
        
        return 0;
    }

### 2.7 Identifiers

name of variables:
> times10 get_nextchar _done
but not allowed:
> 10times get-next-char

C is case-sensitive, no char limit for identifiers. Convention is with underscore, less common are camelCas (which is used in Java or C#)

**Keywords**

### 2.8 Layout of a C Program

*tokens*: group of char that can't be split up w/out changing their meaning. (C Programming: Modern Approach)

`<identifiers>` : := `printf` | `height`   
`<literal>` : := `"Height: %d\n"`  
`<punctuation>`: := `()` | `,` | `;`

- **statements* can be divided* over any number of lines. Don't make it into a single line.
- *Space between tokens* w/c makes it easier to read
- *Indenation*
- *Blank lines*

### Sec 2 Exercises
### Sec 2 Projects


## 3. Formatted Input/Output

`scanf` `printf`

### 3.1 `printf` Function

*format string* -> display contents of a string inside the `"printf(string,...)"`

> printf(*string*, *expr1*, *expr2* ...) ;

Conversion specification -> `% | %d | %f`

C compilers does not check numb of conversion specifications
like:  

    printf("%d %d \n", i); //output: 10 2125860096

    printf("%d\n", i, j); //output: 10

    printf("%f %d\n", i, x); //output 0.00000 -1610612736

#### Conversion Specifications

`%m.pX` | `%-m.pX` where  
*X* def as conversion specifier, *m* & *p* as int constants w/ *m* & *p* optional.
*m* def. as ***minimum field width*** where if the int is lower than m digits(e.g. %4d) then it would display ` 1234` where e is an emtpy space (right justified) but when exceeded then it would automatically change the value and putting it negative symbol (e.g. %-4d) would result in left justified (`123 `).  

*p* def. as ***precision*** w/c depends on *X* where *X* can be
 - d int base 10 where p = minimum num of digits to display (the length of the digit)
 - e float exp format. length of p is default 6
 - f float fixed decimal w/out exponent, p in f = p in e
 - g float exp or fixed where p = max num of significant digits

Example Code:
    
    #include <stdio.h>
    int main(void) {
        int i;
        float x;
        i = 40;
        x = 839.21f;
        printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
        printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
        return 0;
    }

    output:
    |40| 40|40 | 040|
    | 839.210| 8.392e+02|839.21 |

#### Escape Sequences
`\n` => ***escape sequence***

- Alert (bell)      `\a`
- Backspace         `\b`
- New line          `\n`
- Horizontal tab    `\t`
- Quotes\Dbl        `\"` | `\'`
- Slash             `\\`

### 3.2 `scanf` Function

Read input in particular format like `printf` function.

> scanf("%d%d%f%f", &i, &j, &x, &y);

check if:
- conversion specification = input variables
- conversion is correct for the variables
- `&` is crucial for scanf

#### How `scanf` Works

"pattern-matching"
starting from the left of a string, it checks if there is an appropriate input data for each conversion specification, skips blank and spaces, stopping if the data does not belong to the input specifiers. 

From my own understanding, its like it processes an input char by char (including whitespace), then if it finds a digit then it continues until it finds some condition that is not applicable to conversion specification (%d). Like in the example in the book:

> ••1¤-20•••.3¤•••-4.0e3¤  
> ssrsrrrsssrrssssrrrrrr
>
> where s = skipped, r = read

Scanf skips the breakline character, reads the valid data. Another example is `1-20.3-4.0.e3\n` then using 

> scanf("%d%d%f%f", &i, &j, &x, &y);

scanf reads 1, then continues. It reads minus sign, which is not valid inside the integer (`1-`) then "return back" the `-`, read again now with another data. Like an array where it i=i-1 if some invalid data.

#### Ordinary Characters in Format Strings

***White-space characters***
***Other characters***

`scanf` ignores whitespace, checks the format string whether it matches or not, 
if the other character did not match with format string, the `scanf` aborts and let the next call to be read by the function. For example, the format string is `"%d/%d"` where the input is `space5/space21` it ignores the space char, reads the 5 to be stored in `%d` then matches the  
    

#### Confusing `printf` with `scanf`

dont use `&`in printf and be careful about format string (may as well not use it) in `scanf` function. Bad idea to use `\n` esp at the end as it advances to non-white-space, resulting in hanging.

#### Adding Fractions

### Q & A

`%i` can be used for octal, decimal, or hexa
- octal prefix 0 => 0256
- hexa prefix 0x => 0x256

use `%%` to print percentage sign.

### Exercises

### Programming Projects (I only did 1 & 2)

## 4. Expressions

C emphasizes on expressions. Arithmetic operators, Relational Operators, Logical Operators

### 4.1 Arithmetic Operators

perform add, subtrac, multiply and divide.

| Unary     |Binary         |               |
|--         |--             |--
| + unary plus | additive   | multiplicative|
| - unary minus | add       |   multiply |
|           |   subtract    |  division |
|           |               |  remainder|

> i = +1;  //unary  
> j = -1; //unary

float = int + float
truncate = int / int  
remainder works w/ integer only  
undefined behavior if 0 / x or x / 0  
c89 -> negative operand leads to rounding up or down  
c99 -> negative operand, division is truncated towards 0 whilst remainder is rounded up.

##### Implementation Defined Behavior

Behavior dependent on the version of the language, i.e. behavior on C89 and C99 are possibly different.

#### Operator Precedence and Associativity

| Heirarchy | | | |
|-- |-- |-- |-- |
| Highest | + | - | unary |
|         | * | / | % |
| Lowest  | + | - | binary 

Operators on same level has same precedence. what if two or more operators? ***Associativity*** tackles this problem. 

Operator can be associative in left or right meaning where it starts to group, left to right and right to left. Binary operators are left associative. Unary operators are right associative.

> i - j - k  = (i - j) - k  ;  
> i * j / k = (i * j) / k  ;  
> \- \+ i  = \- (   \+  i   ) ;


###### Program - Computing a UPC Check Digit


### 4.2 Assignment Operators

`=` is called an assignment operator.

assignment chaining:
> i = j = k = 0 ;

right associative

> i = ( j = ( k = 0 )) ;

***Lvalue***

> *lvalue* assignment operator *rvalue*  
> ex: varName = "hello, world";

values (the variable) must exist on the left of the assignment operator otherwise it would become invalid.

#### Compound Assignment

`i += 1 ;` = `i = i + 1 ;`

### 4.3 Increment and Decrement Operators

***increment*** ***decrement***  
***prefix*** ***postfix***  

what kind of scenario is pre-increment used?

### 4.4 Expression Evaluation

using parenthesis to understand complex expression with different operators and their associativity

| Precedence | Name | Symbol(s)| Associativity|
|--|--|--|--|
| 1 | increment  decrement | ++  -- | left|
| 2 | increment (prefix)  decrement (prefix)  unary plus  unary minus | ++ -- + - | right |
| 3 | multiplicative | * / % | left |
| 4 | additive | + - | left |
| 5 | assignment | = *= /= %= += -= | right |


> a = b += c++ - d + --e / -f
  

#### Order of Subexpression Evaluation

expressions can be broken into subexpressions. Be careful about modifying inside an expression.

avoid undefined behaviour (pp.65)

### 4.5 Expression *statements*

expression as statement itself

> i + 2 ;

but tends to be unuseful

### Q & A

## 5. Selection *statements*


***selection *statements****  
***iteration *statements****  
***jump *statements****  
***compound *statements****
***null statement***

C programming language rather evaluates true or false into 1 and 0 respectively. Meaning it returns 1 or 0 if logical value is true or false.


### 5.1 Logical Expressions

#### Relational Operators

| Symbol | Meaning |
| ----| ---- |
| < | less than |
| > | greater than |
| <= | less than or equal to |
| >= | greater than or equal to |

Can be used to compare intergers and floating point numbers.

#### Equality Operators

| Symbol | Meaning |
| ----| ---- |
| == | equal to |
| != | not equal to |

left associative and
lower heirarchy to relational operators

> i < j == j < k  
> ( i < j ) == ( j < k )

#### Logical Operators

| symbol | meaning |
| -- | -- |
| ! | logical negation |
| && | logical and |
| \| \| | logical or |

side effect in logical expressions

! operator same precedence as unary + and unary -  
! operator is right associative


### 5.2 The `if` statement

> *if ( expression ) statement*

#### Compound *statements*

> *if ( expressions ) { *statements* }

expressions that are conditional

#### The `else` Clause

> if ( expression ) statement else statement

    if (i > j)
        max = i;
    else
        max = j;

can be nested like:

    if (i > j)
        if (i > k)
            max = i;
        else
            max = j;
    else
        if (j > k)
            max = j;
        else
            max = k;

for more readability and avoid possible error in the compiler, use {} like:

    if (i > j) {
        if (i > k)
            max = i;
        else
            max = j;
    } else {
        if (j > k)
            max = j;
        else
            max = k;
    }

or 
    
    if (i > j) {
        if (i > k) {
            max = i;
        } else {
            max = j;
        }
    } else {
        if (j > k) {
            max = j;
        } else {
            max = k;
        }
    }

> *if ( expressions ) { *statements* } else { *statements* }

#### Cascaded `if` *statements*

proper:
        if (expression) {
            *statements*
        } else if {
            *statements*
        } else if {
            *statements*
        }

#### Calculating a Broker's Commission
##### broker.c 

#### The "Dangling `else`" Problem

else clause belongs to the nearest `if` supposedly that it has not already paired with `else`.

example:   

    if (expr)
        if (expr)
            *statements*;
    else
        *statements*;

The ambiguity of where the `else` belongs to leads to being read by the compiler as:

    if (expr)
        if (expr)
            *statements*;
        else
            *statements*;

fix: use `{}` braces to group *statements*

    if (expr) {
        if (expr) {
            *statements*;
        }
    } else {
        *statements*;
    }



#### Conditional Expressions

***conditional operator*** consists of (? and :)

**Conditional expression**
> expr1 ? expr2 : expr3

> return i > j ? i : j;

can be used in `printf`

writeable but not that easily readable

    if (i > j)
        printf("%d\n", i)
    else
        printf("%d\n", j)

in condition expressions equivalent:

    printf("%d\n", i > j ? i : j);

#### Boolean Values in C89

C language lack Boolean type (not including the library).
C89 -> no boolean type

workaround:

    int flag;
    flag = 0;
    flag = 1;

not readable

instead for C89

    #define TRUE 1
    #define FALSE 0

    flag = TRUE;
    flag = FALSE;

    if(flag == TRUE) is same as if(flag)
    if(flag == FALSE) is same as if(!flag)

    //macro

    #define BOOL int
    BOOL flag;
    //typedef 7.5, enums 16.5

#### Boolean Values in C99

Boolean variable can be represented as `_Bool flag;`   

`_Bool` can only be assigned as 0 or 1, non-zero defaults to 1.   

I could also use `<stdbool.h>` header with data type bool for example:

    #include <stdbool.h>

    int main() { bool variable_identifier = 0 //which is false }

### 5.3 The `switch` statement

Structure of a `switch` statement:

    switch (*expression*) {
        case *const-expression*:
        *statements*;
        ...
        case *const-expression*:
        *statements*;
        default: *statements*;
    }

Switch expressions require integer expression and const-expression are expressions using only constants and not variables or functions. Every case usually have a break after their statements and does not require braces on its scope. Order of case label does not matter. You can also group the case labels by preceding the statements.

    switch (grade) {
        case 4: case 3: case 2: case 1:
            printf("Passing");
            break;
        case 0: printf("Failing); break;
        default: printf("Invalid grade"); break;
    }

Range values are not allowed(C99). I can ommit the default statement.

#### Role of `break` statement

Without break, the control will flow from one case into the next.

#### PROGRAM: Printing a Date in Legal Form ( date.c )

refer to date.c code

### Q & A