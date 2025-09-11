#include <stdio.h>

int main(void){
    
   int x, output;

   printf("++++ Polynomials ++++\n");
   printf("Enter the value of x: ");
   scanf("%d",&x);

    //output = (3*(x*x*x*x*x))+(2*(x*x*x*x))-(5*(x*x*x))-(x*x)+(7*x)-6;

    output = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("%d",output);

    return 0;
}