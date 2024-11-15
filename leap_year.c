#include<stdio.h>

int main()
{
    int yr;
    printf("Enter a year:\n");
    scanf("%d",&yr);

    if(yr%4==0)
    {
        printf("Leap year!!\n");

    }
    else
    {
        printf("Not a leap year!!\n");
    }

    return 0;
}
