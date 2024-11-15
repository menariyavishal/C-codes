#include<stdio.h>
void prime_fac(int num);

int main()
{
    int num ;
    printf("Enter the value of num:\n");
    scanf("%d",&num);
    prime_fac(num);
    return 0;
}



void prime_fac(int num)
{
    int i;
   for( i =2;i<num;i++)
   {
       if(num%i==0)
       {
        printf(" not prime number\n");
        break;
       }
   }
   if(i==num)
       {
           printf("prime number\n");

       }
}
