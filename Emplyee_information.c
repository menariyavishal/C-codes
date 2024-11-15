#include<stdio.h>
#include<string.h>

struct Employee
{
    int ID;
    char name[20];
    float salary;
} e[10];

int main()
{
    int i;
     for( i = 0;i<3;i++)
     {
         printf("Enter Employee ID:\n");
         scanf("%d",&e[i].ID);
        printf("ID = %d\n",e[i].ID);

         printf("Enter your Name:\n");
         scanf("%s",&e[i].name);
        printf("Name : %s\n",e[i].name);

         printf("Enter your Salary:\n");
         scanf("%f",&e[i].salary);
        printf("Salry = %.2f\n",e[i].salary);

     }

    if(e[0].salary>e[1].salary)
    {
        if(e[0].salary>e[2].salary)
        {
            printf("Highest Salary : %.f\n",e[0].salary);
        }
        else
        {
            printf("Highest Salary : %.f\n",e[2].salary);
        }

    }
    else
    {
        if(e[1].salary>e[2].salary)
        {
            printf("Highest Salary : %.f\n",e[1].salary);

        }
        else
        {
            printf("Highest Salary : %.f\n",e[2].salary);

        }
    }
    return 0;
}