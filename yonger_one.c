//Yongest one between three people whose age is input through keyboard

#include<stdio.h>
void young_one(int r,int s,int a);

int main()
{
    int age_R,age_S,age_A;
    printf("Enter the age of Ram , Shyam and Ajay:\n");
    scanf("%d%d%d",&age_R,&age_S,&age_A);
    young_one(age_R,age_S,age_A);



    return 0;
}

void young_one(int r,int s,int a)
{
    if(r<s)
    {
        if(r<a)
        {
            printf("Ram is Youngest!! and age = %d\n",r);
        }
        else
        {
            printf("Ajay is Youngest!! and age = %d\n",a);
        }
    }
    else
    {
        if(s<a)
        {
            printf("Shyam is Youngest!! and age = %d\n",s);
        }
        else
        {
            printf("Ajay is Youngest!! and age = %d\n",a);
        }
    }
}
