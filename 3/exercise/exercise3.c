#include <stdio.h>

/*
(a) Exponential notation; left-justified in a field of size 8; 
one digit after the decimal point.  
(b) Exponential notation; right-justified in a field of size 10; 
six digits after the decimal point.  
(c) Fixed decimal notation; left-justified in a field of size 8; 
three digits after the decimal point.  
(d) Fixed decimal notation; right-justified in a field of size 6; 
no digits after the decimal point.  
*/

 int main() {

   float x = 839.21f;

   printf("|%-8.1e|\n", x);
   printf("|%10.6e|\n", x);
   printf("|%-8.3f|\n",x);
   printf("|%6f|\n", x);
 }  