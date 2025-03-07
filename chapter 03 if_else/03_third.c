#include <stdio.h>

int main()
{
    int a, b, c;

    printf("enter the value of a:");
    scanf("%d", &a);
    printf("the value of a is:%d\n", a);

    printf("enter the value of b:");
    scanf("%d", &b);
    printf("the value of b is:%d\n", b);

    printf("enter the value of c:");
    scanf("%d", &c);
    printf("the value of a is:%d\n", c);

        if (a>b && a>c)
        {
            printf("----------the value of a is greater then b and c----------------");

        }
        else if (b>c && b>a)
        {
            printf("-------------the value of b is greater then a and c----------------");
        }
        else
        {
            printf("---------------c is greatrer--------------");
        }
        
    return 0;
}