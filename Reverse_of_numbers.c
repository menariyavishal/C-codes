#include<stdio.h>

int main()
{
    printf("Reversing a five digit number:\n");

    int n,d1,d2,d3,d4,d5,re_num;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("before :: number = %d\n",n);

    d5 = n % 10;
    n = n / 10;
    d4 = n % 10;
    n = n / 10;
    d3 = n % 10;
    n = n / 10;
    d2 = n % 10;
    n = n / 10;
    d1 = n % 10;
    n = n / 10;

    re_num = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
    printf("After :: number = %d\n",re_num);



    return 0;
}
