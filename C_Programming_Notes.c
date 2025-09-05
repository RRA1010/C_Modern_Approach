#include <stdio.h> //directives
//std.io stands for standard I/O (input/output) library


int main(void)
{
    int height, length, width, volume, weight;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    //printf("Volume is now %d", volume);
    weight = (volume + 165) / 166;

    // PROGRAM
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Height: %d Length: %d\n", height, length );
    printf("Dimensional weight (pounds): %d\n", weight);

    
    return 0;
}



