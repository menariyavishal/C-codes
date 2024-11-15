#include<stdio.h>
#include<math.h>

float power(float x,int y);

int main()
{
    float x,pow;
    int y;
    printf("Enter the value of x and y:\n");
    scanf("%f%d",&x,&y);
    pow = power(x,y);

    printf("%f to the power %d = %f\n",x,y,pow);
    return 0;
}

float power(float x,int y)
 {
    int p =1;
    for(int i= 1;i<=y;i++)
    {
        p = p*x;
    }
    return p;
 }