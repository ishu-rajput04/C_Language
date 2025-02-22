#include <stdio.h>
int main()
{
    int a;
    float b;
    char d;

    printf("enter the value of a:");
    scanf("%d", &a);
    printf("the value of a is:%d", a);

    printf("\nenter the value of b:");
    scanf("%f", &b);
    printf("the value of b is:%f", b);

    printf("\nenter the value of d is :");
    scanf("%c", &d);
    printf("the value of d is ->%c",d);
    return 0;
}