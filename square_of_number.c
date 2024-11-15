#include<stdio.h>
float squre(float a);

int main()
{
    float a,b;
    printf("Enter any value:\n");
    scanf("%f",&a);
    b = squre(a);
    printf("Square of %f is %f\n",a,b);



    return 0;
}

float squre(float a)
{
    float y = a*a;
    return y;
}