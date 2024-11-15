#include<stdio.h>

int main()
{

    float h,w,k;

    h = 1189;
    w = 841;

    for(int i = 0;i<9;i++)
    {
        k = h;
        h = w;
        w = k/2;
        printf("A(%d) = %.2f x %.2f\n",i,k,h);
    }


    return 0 ;
}
