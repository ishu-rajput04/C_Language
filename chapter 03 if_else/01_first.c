#include <stdio.h>

int main(){
    // is no. is divisible by 2 or not
    int n;
    printf("enter the value of n=");
    scanf("%d",&n);
    printf("the value of n is=%d",n);
    if (n%2==0)
    {
        printf("\nthe no. is even");

    }
    else
    {
        printf("\nthe no. is odd");
    }
    return 0;
}