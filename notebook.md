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

- *Statements can be divided* over any number of lines. Don't make it into a single line.
- *Space between tokens* w/c makes it easier to read
- *Indenation*
- *Blank lines*

### Sec 2 Exercises
### Sec 2 Projects


## 3. Formatted Input/Output

`scanf` `printf`

### 3.1 `printf` Function

*format string*

