#include<stdio.h>

int main()
{
    float bs,da,hra,gs;
    printf("Enter the Salary:\n");
    scanf("%f",&bs);


    da = 0.4 * bs;
    hra = 0.2 * bs;
    gs = bs + da + hra;
    printf("\n");
    printf("The Basic salary is: %f\n",bs);
    printf("The dearness allowance is: %f\n",da);
    printf("The House rent allowance is: %f\n",hra);
    printf("The Gross salary is: %f\n",gs);

    return 0;
}
