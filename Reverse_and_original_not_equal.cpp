#include<stdio.h>

int main()
{
    int num,a1,a2,a3,a4,a5,rev;
    printf("Enter five digit number:\n");
    scanf("%d",&num);
    printf("Original number is::%d\n",num);
    a5 = num%10;
    num = num/10;
    a4 = num%10;
    num = num/10;
    a3 = num%10;
    num = num/10;
    a2 = num%10;
    num = num/10;
    a1 = num%10;
    num = num/10;

    rev = a5*10000+a4*1000+a3*100+a2*10+a1;
    printf("Reversed number is::%d\n",rev);

    if(num==rev)
    {
        printf("Original number and Reversed number both are equal:\n");
    }
    else
    {

        printf("Original number and Reversed number both are not equal:\n");

    }

    return 0;
}
