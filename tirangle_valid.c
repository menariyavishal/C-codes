//IF sum of three sides of a triangle is 180 then it is valid otherwise not

#include<stdio.h>
void triangle(int a1,int a2,int a3);


int main()
{
    int a1,a2,a3;
    printf("Enter the values of all triangles:\n");
    scanf("%d%d%d",&a1,&a2,&a3);
    triangle(a1,a2,a3);
    



    return 0;
}

void triangle(int a1,int a2,int a3)
{
    int sum;
    sum = a1 + a2 + a3;
    if(sum==180)
    {
        printf("Triangle is valid!\n");

    }
    else{
        printf("Triangle is not valid!\n");
    }
}