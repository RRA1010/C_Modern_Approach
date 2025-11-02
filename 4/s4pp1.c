#include <stdio.h>

int main() {
    int num, reversed_num;

    printf("Enter a two-digit number: "); //28
    scanf("%d", &num);

    reversed_num =  (num / 10) + ((num % 10) * 10);

    printf("The reversal is %d: ", reversed_num);
    return 0;
    //82
}