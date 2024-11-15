#include<stdio.h>
int fact(int f);

int main()
{
   int num;
    printf("Enter value of num::\n");
    scanf("%d",&num);

   int f = fact(num);
    printf("Factorial of %d is %d\n",num,f);
    

   
   
   
    return 0;
}



int fact(int f)
{
    int factorial;
    


    factorial = 1;
    for(int i = 1;i<=f;i++)
    {
        factorial = factorial * i;
    }

    return factorial;

}