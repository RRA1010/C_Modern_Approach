# Exercises

## Q1

Show the output produced by each of the following program fragments. Assume that i, j, and k are int variables.  

>(a) i = 5; j = 3;  
 printf("%d %d", i / j, i % j);  
 (b) i = 2; j = 3;  
 printf("%d", (i + 10) % j);  
 (c) i = 7; j = 8; k = 9;  
 printf("%d", (i + 10) % k / j);  
 (d) i = 1; j = 2; k = 3;  
 printf("%d", (i + 5) % (j + 2) / k);  

answer:

> (a) 1 2  
 (b) 0  
 (c) 1  
 (d) 0

## Q2

If i and j are positive integers, does (-i)/j always have the same value as -(i/j)? Justify your answer.

A: no, the value of `(-i) / j` may differ from compiler to compiler due to the `i` variable is converted to negative first, whereas `-(i/j)` is standard agnostic.

Author: C89 not same, c99 same.

## Q3

What is the value of each of the following expressions in C89? (Give all possible values if
an expression may have more than one value.)

> (a) 8 / 5  
(b) -8 / 5  
(c) 8 / -5  
(d) -8 / -5  

Answer:

> (a) 1  
(b) -1 or -2  
(c) -1 or -2  
(d) 1

## Q4
