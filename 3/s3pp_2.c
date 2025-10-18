/* adds two fractions */

#include <stdio.h>

int main(void) {
    
    int item_num, month, date, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &date, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%-16d$%7.2f%10d/%d/%d", item_num, unit_price, month, date, year);


    return 0;
}