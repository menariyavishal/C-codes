#include<stdio.h>

int main()
{

    printf("Converting Temperature from degree celsius to fahrenheit:\n");
    float celc,frn;
    printf("Enter the value of Temperature in Celsius:\n");
    scanf("%f",&celc);

    frn = (9*celc)/(5) + 32;

    printf("fahrenheit = %f",frn);


    return 0;

}
