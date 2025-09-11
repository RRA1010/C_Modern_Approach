#include <stdio.h>

int main(void){
    
    float money, tax = 0.05f;

    printf("Enter an amount: ");
    scanf("%f", &money);

    money = money * (1.0f+tax);
    printf("With tax added: %.2f", money);

    return 0;
}