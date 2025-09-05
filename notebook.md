# C Programming (Second Edition)

## 1 Intro

### History of C

### Strengths and Weakness of C

// C programs rely on three key language features:
// directives
// functions
// statements
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

Statements   
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
>   statements
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

