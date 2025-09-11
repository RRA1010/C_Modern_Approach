#include <stdio.h> //directives
//std.io stands for standard I/O (input/output) library


int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    
    volume = height * length * width;
    weight = (volume + 165) / 166;
    
    // PROGRAM
    printf("Volume: %d", volume);
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Height: %d Length: %d\n", height, length );
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}



