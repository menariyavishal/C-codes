/*Reverse a five digit number and check it's equal to original one or not!!*/


#include<stdio.h>
int reverse(int n);

int main()
{

    int num,rev;
    printf("Enter the value of num:\n");
    scanf("%d",&num);

    rev = reverse(num);
    printf("Reverse number is %d\n",rev);
    if(rev==num)
    {
        printf("Both are equal!\n");
    }
    else
    {
        printf("Not equal!\n");
    }



    return 0;
}

int reverse(int n)
{
    int d1,d2,d3,d4,d5,total;

    d1 = n%10;
    n = n/10;
    d2 = n%10;
    n = n/10;
    d3 = n%10;
    n = n/10;
    d4 = n%10;
    n = n/10;
    d5 = n%10;
    n = n/10;

    total = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;
    return(total);
}