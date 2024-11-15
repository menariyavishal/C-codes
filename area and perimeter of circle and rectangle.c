#include<stdio.h>

int main()
{
    printf("Calculating area and perimeter:\n");

    float l,b,r;
    printf("Enter the Length, Breadth and radius:\n");
    scanf("%f%f%f",&l,&b,&r);
    const float pi = 22/7;

    printf("The Area of rectangle = %f\n",l*b);
    printf("The Perimeter of rectangle = %f\n",2*(l+b));

    printf("The Area of Circle = %f\n",pi *r *r);
    printf("The Circumference of Circle = %f\n",2 * pi *r);

    return 0;

}

