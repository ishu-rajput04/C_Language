#include <stdio.h>

int main()
{
    float principal, rate, time;
    printf("enter the value of principal:");
    scanf("%f", &principal);

    printf("enter the value of rate:");
    scanf("%f",&rate);

    printf("enter the value of time:");
    scanf("%f",&time);

    float SI=(principal*rate*time)/100;
    printf("The value of simple intrest is:%f",SI);
    return 0;
}