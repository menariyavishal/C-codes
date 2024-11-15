#include<stdio.h>

void main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int sumE = 0;
    int sumO = 0;
    for(int i=0;i<=n;i++)
    {
        sumE = sumE + i;
        if(i%2==1)
        {
            sumO = sumO + i;
        }
    }
    printf("Sum of Even numbers:\n");
    printf("Sum = %d\n",sumE);
    printf("Sum of Odd numbers:\n");
    printf("Sum = %d\n",sumO);


}
