#include<stdio.h>

int main()
{
    float wgh,hiet,bmi;
    printf("Enter your Weight \n");
    scanf("%f",&wgh);
    printf("Enter your Height \n");
    scanf("%f",&hiet);

    bmi = wgh / (hiet*hiet);

    if(bmi<15)
    {
        printf("Starving..");
    }
    else if(bmi>=15.1 && bmi<=17.5)
    {
        printf("Anorexic..");
    }
    else if(bmi>=17.6 && bmi<=18.5)
    {
        printf("Underweight..");
    }
    else if(bmi>=18.6 && bmi<=24.6)
    {
        printf("Ideal..");
    }
    else if(bmi>=25 && bmi<=25.9)
    {
        printf("Overweight..");
    }
    else if(bmi>=30 && bmi<=30.9)
    {
        printf("Obese..");
    }
    else
    {
        printf("Morbidly Obese..");
    }



    return 0;
}