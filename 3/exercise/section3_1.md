# Exercises

## Q1

What output do the ff calls of `printf` produce?

    (a) printf("%6d,%4d", 86, 1040);
    (b) printf("%12.5e", 30.253);
    (c) printf("%.4f", 83.162);
    (d) printf("%-6.2g", .0000009979);

Result:

    (a)     86,1040
    (b) 3.02530e+01
    (c) 83.1620
    (d) 1e-06

## Q2

Write calls of printf that display a `float` variable `x` in the following formats.

    (a) Exponential notation; left-justified in a field of size 8; one digit after the decimal point.  
    (b) Exponential notation; right-justified in a field of size 10; six digits after the decimal point.  
    (c) Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.  
    (d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.  

My Answer: 

    int main() {

    float x = 839.21f;

    printf("|%-8.1e|\n", x);
    printf("|%10.6e|\n", x);
    printf("|%-8.3f|\n",x);
    printf("|%6f|\n", x);
    }  

Output: 

    |8.4e+02 |
    |8.392100e+02|
    |839.210 |
    |839.210022|

##  Q3

For each of the following pairs of scanf format strings, indicate whether or not the two  strings are equivalent. If they’re not, show how they can be distinguished.

    (a) "%d" versus " %d"
    (b) "%d-%d-%d" versus "%d -%d -%d"
    (c) "%f" versus "%f "
    (d) "%f,%f" versus "%f, %f"

Answer:

(a) is not equal because the `" %d"` accomodates whitespace of the input before the number whereas `"%d"` do not. (?)  
(b) not equal, as the first format string does not number input with space on after it i.e. 19*s* compared to the other format string where if there are three inputs with spaces after it would be read by `scanf` function.  
(c) same (?)
(d) the same I think.

## Q4

Suppose that we call scanf as follows:  
> scanf("%d%f%d", &i, &x, &j);  

If the user enters
> 10.3 5 6

what will be the values of i, x, and j after the call? (Assume that i and j are int variables
and x is a float variable.)

Answer: (?)

> 10 0.3 5

## Q5

> 12.3 45 .6

## Q6

Show how to modify the addfrac.c program of Section 3.2 so that the user is allowed to
enter fractions that contain spaces before and after each / character.

> scanf("%d /%d)

