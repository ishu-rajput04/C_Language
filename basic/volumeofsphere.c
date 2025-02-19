#include <stdio.h>

int main(){
    int r;
    printf("enter the value of (r)=");
    scanf("%d",&r);
    printf("radius of sphere is= %d\n",r);
    // volume of sphere is
    float v=4*3.14*r*r*r/3;
    printf("the volume of sphere is:%f",v);
    return 0;
}