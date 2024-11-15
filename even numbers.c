#include<stdio.h>

void main()
{
    printf("Even numbers between 1 to 50:\n");
    int i =1;
    for(i;i<=50;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}
