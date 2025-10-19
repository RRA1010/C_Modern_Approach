/* adds two fractions */

#include <stdio.h>

int main(void) {
    
    int isbn_GS1, isbn_group_id, isbn_pbl_code, isbn_item_no, isbn_check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &isbn_GS1, &isbn_group_id, &isbn_pbl_code, &isbn_item_no, &isbn_check);
    
    printf("GS1 Prefix: %d\n", isbn_GS1);
    printf("Group identifier: %d\n", isbn_group_id);
    printf("Publisher code: %d\n", isbn_pbl_code);
    printf("Item number: %d\n", isbn_item_no);
    printf("Check digit: %d\n", isbn_check);

    return 0;   
}