#include <stdio.h>

int main(){
    printf("\n");
    printf("----------ALL MARKS ARE OUT OF 100---------\n \n");
    // subject 
    // take sub marks form the user 
    int maths,english,hindi,cs,sst;
    
    printf("enter the marks of maths:-");
    scanf("%d",&maths);
    printf("enter the marks of english:-");
    scanf("%d",&english);
    printf("enter the marks of hindi:-");
    scanf("%d",&hindi);
    printf("enter the marks of cs:-");
    scanf("%d",&cs);
    printf("enter the marks of sst:-");
    scanf("%d",&sst);

    int result;
    char c='%';
    result=(maths+english+hindi+cs+sst)*100/500;
    printf("your result is = %d %c\n",result,c);

    // conditional statement
     if (result>=45)
     {
        printf("--------------Congratulation,you are PASS---------------");
     }
     else
     {
        printf("--------------Better luck,Sorry you are FAIL------------");
     }
     
    return 0;
}