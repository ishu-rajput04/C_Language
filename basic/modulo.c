#include <stdio.h>

int main(){
    // its function is to find the remainder..
    int x=20;
    int y=20%3;
    printf("the remainder if divided by 3 is --> %d\n",y);
    printf("\n");
    // basic --------->> by d,d,q rule i.e " remainder = divident - (divisor*qutient) "
    int a=19; //divident
    int b=2;// divisor
    int q=a/b; //----- q=quitent
    int r=a-(b*q);
    printf("the remainder is %d",r);
    return 0;
}