#include <stdio.h>

int main()
{

    // the no. is divisble by 5 or not

    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    printf("the value of n is=%d",n);
    if (n%5==0)
    {
        printf("\nthe value is divisible by 5");
    }
    else{
        printf("\nthe value is not divisible by 5");
    } 
       return 0;

    // ------------------ YEAR IS LEAP OR NOT-------------------------------------------------
 
     int year;
     printf("enter your desired year=");
     scanf("%d",&year);
     printf("your year is-----%d------",year);
     
     //means no. is divisible by 4

     if (year%4==0)
     {
        printf("\n----------the year is leap year------------");
     }
     else
     {
        printf("\n----------the year is not leap year----------");
     }
     return 0;
}
