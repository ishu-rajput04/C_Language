#include <stdio.h>

int main()
{

    // area of rectangle

    // int length = 5;
    // int breadth = 8;
    // printf("the area of rectangle is :%d", length * breadth);

    // --> now taking input from user
    int length, breadth;
    printf("enter the value of length:");
    scanf("%d", &length);

    printf("\nenter the value of breadth:");
    scanf("%d", &breadth);
    printf("the area of rectangle is--> %d",length*breadth);

    return 0;
}
