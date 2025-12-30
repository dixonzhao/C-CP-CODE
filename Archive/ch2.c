#include <stdio.h>
/*
name: ch2
*/
// int main(void) {
//     int height= 100;
//     float length = 2150.48f;
//     printf("Height: %d\n",height);
//     printf("Height: %d Length: %d\n", height, length);
//     return 0;
// }

int main(void) {
    int height, length, width, volume, weight;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    return 0;
}