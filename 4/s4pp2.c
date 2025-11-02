#include <stdio.h>

int main() {
    int num, reversed_num;

    printf("Enter a three-digit number: "); //123
    scanf("%d", &num);

    reversed_num = (num / 100) + (((num % 100) / 10) * 10) + ((num % 10) * 100);

    printf("The reversal is %d: ", reversed_num);
    return 0;

    //321
}