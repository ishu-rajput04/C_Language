#include <stdio.h>

int main()
{
    // area of circle

    float radius;
    printf("enter the value of radius:");
    scanf("%f", &radius);
    printf("the area of circle is-->%f", 22 * radius * radius / 7);

    // area of cyclinder
    float height;
    printf("\nenter the value of height:");
    scanf("%f", &height);
    printf("the area of cyclinder is-->%f ", 22 * radius * radius * height / 7);
    return 0;
}