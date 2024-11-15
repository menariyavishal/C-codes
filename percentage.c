#include<stdio.h>

int main()
{
    printf("Calculating percentage of a student out of 100 marks for each subject:\n");
    float m1,m2,m3,m4,m5;
    printf("Enter the marks:");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

    float total = m1 + m2 + m3 + m4 + m5;
    float per = (total * 100)/500;
    printf("Total marks gained = %f\n",total);
    printf("Percentage = %f\n",per);



    return 0;

}
