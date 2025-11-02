#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter a first digit number: "); 
    scanf("%d", &num1);
    printf("Enter a second digit number: "); 
    scanf("%d", &num2);
    printf("Enter a third digit number: "); 
    scanf("%d", &num3);
    
    printf("The reversal is %d%d%d: ", num3, num2, num1);
    return 0;
    //321
}