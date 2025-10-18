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

    (a) "%d"
    versus " %d"
    (b) "%d-%d-%d" versus "%d -%d -%d"
    (c) "%f"
    versus "%f "
    (d) "%f,%f"
    versus "%f, %f"