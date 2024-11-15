#include<stdio.h>
void display1(int m);
void display2(int *n);



int main()
{
    int marks[10],i;
    for(i=0;i<=6;i++)
    {
        printf("Enter the value of marks:\n");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<=6;i++)
    {
       display1(marks[i]);
    }
    printf("\n");

    for(i=0;i<=6;i++)
    {
       display2(&marks[i]);
    }
    
    return 0;
}

void display1(int m)
{
    printf("%d,",m);
}
void display2(int *n)
{
    printf("%d,",*n);
}
