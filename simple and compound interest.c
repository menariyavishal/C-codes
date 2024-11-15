#include<stdio.h>
#include<math.h>

void main()
{
    printf("Simple interest::\n");
    float p,y,r,si,c;
    printf("Enter the value of p,y and r\n");
    scanf("%f%f%f",&p,&y,&r);
    si = (p*y*r)/(100);
    printf("simple interest = %f",si);
    printf("\n\n");

    printf("Compound Interest::\n");

    float g = 1 + r/(100);
    c = (p* pow(g,y)) - p;
    printf("Compound interest = %f",c);

}
