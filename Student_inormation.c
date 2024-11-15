#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int age;
    float total_marks;

}s[10];

     //struct student s[10];


int main()
{
    int i;
     for( i = 0;i<2;i++)
     {
         printf("Enter your name:\n");
         scanf("%s",&s[i].name);
        printf("Name -->%s\n",s[i].name);

         printf("Enter your age:\n");
         scanf("%d",&s[i].age);
        printf("age -->%d\n",s[i].age);

         printf("Enter your total marks:\n");
         scanf("%f",&s[i].total_marks);
        printf("Total marks -->%.2f\n",s[i].total_marks);


     }

     float avg = (s[0].total_marks + s[1].total_marks)/2;
     printf("avg = %.2f\n",avg);

     

     
    return 0;
}