#include <stdio.h>

int main()
{
    float celcius;
    printf("enter the value of temp. in celcius :");
    scanf("%f", &celcius);
    printf("the vlaue of temp.is in fahrenhiet is :%f", (celcius * 9 / 5) + 32);
    return 0;
}