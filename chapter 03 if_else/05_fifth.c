#include <stdio.h>

int main()
{

    // Take input percentage of student and print grade according to Marks?
    
    // else if condition
    int p;
    printf("enter the value of p:");
    scanf("%d",&p);
    printf("the value of p is %d\n", p);

    if (p > 91)
    {
        printf("-----------EXCELLENT---------");
    }
    else if (p >81)
    {
        printf("-----------VERY GOOD---------");
    }
    else if (p>71)
    {
        printf("-------just pass----------");
    }
    
    return 0;
}