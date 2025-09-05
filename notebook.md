# C Programming (Second Edition)

## 1 Intro

### History of C

### Strengths and Weakness of C


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