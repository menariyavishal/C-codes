#include<stdio.h>

void main()
{
    printf("Odd numbers between 1 to n:\n");
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }
    }
}
