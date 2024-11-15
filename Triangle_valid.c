#include<stdio.h>

int main()
{
    int s1,s2,s3,largeside,sum=0;
    printf("Enter three sides of Triangle\n");
    scanf("%d%d%d",&s1,&s2,&s3);

    if(s1>s2)
    {
        if(s1>s3)
        {
            sum = s2 + s3;
            largeside = s1;
        }
        else
        {
            sum = s1 + s2;
            largeside = s3;
        }
    }

    else
    {
        if(s2>s3)
        {
            sum = s1 + s3;
            largeside = s2;
        }
        else
        {
            sum = s1 + s2;
            largeside = s3;
        }
    }

    if(sum > largeside)
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is not valid\n");
    }

   
    return 0;
}