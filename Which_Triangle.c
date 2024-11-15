#include<stdio.h>


int main()
{
    int s1,s2,s3,hypo,sum = 0;
    printf("Enter the sides of triangle\n");
    scanf("%d%d%d",&s1,&s2,&s3);

    //For Isosceles , Equilateral and Scalene Triangle

    if(s1==s2)
    {
        printf("Isosceles Trinagle\n");
    }
    else if(s2==s3)
    {
         printf("Isosceles Trinagle\n");
    }

    else if(s1==s3)
    {
         printf("Isosceles Trinagle\n");
    }

    else if(s1==s2==s3)
    {
         printf("Equilateral Trinagle\n");
    }
    else
    {
        printf("Scalene Triangle\n");
    }

    //For Right angled Triangle

    if(s1>s2)
    {
        if(s1>s3)
        {
            hypo =s1*s1;
            sum = s2*s2 + s3*s3;

        }
        else
        {
            hypo =s3*s3;
            sum = s1*s1 + s2*s2;
        }
    }
    else
    {
        if(s2>s3)
        {
            hypo =s2*s2;
            sum =s1*s1 + s3*s3;
        }
        else
        {
            hypo =s3*s3;
             sum = s1*s1 + s2*s2;
        }
    }

    if(hypo == sum)
    {
        printf("Right Angle Tirangle\n");
    }
    else
    {
        printf("Not a Right Angle Trinagle\n");
    }



    
    
    return 0;
}