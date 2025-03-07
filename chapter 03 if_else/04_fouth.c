#include <stdio.h>

int main()
{

    // Take positive integer from input and tell if it is divisible by 5 and 3 ?
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    printf("the value of n is -->%d\n", n);

    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            printf("------the n is divisble by 5 and 3 both------");
        }
        else
        {
            printf("-----the n is not divisible by 5 and 3");
        }
    }
    else
    {
        printf("-----the n is not divisible by 5 and 3----------");
    }
    return 0;
}