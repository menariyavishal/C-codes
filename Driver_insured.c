#include<stdio.h>

int main()
{
    // int age;
    // char ms,sex;
    // printf("Enter the Marital status, Sex and Age !!\n");
    // scanf("%c%c%d",&ms,&sex,&age);

    // if((ms == 'M') ||(ms == 'U' && sex == 'M' && age >30) || (ms == 'U' && sex == 'F' && age > 25))
    // {
    //     printf("Driver will be insured\n");
    // }

    // else 
    // {
    //     printf("Driver will not be insured\n");
    // }


    // CONDITIONAL OPERATORS----------> 
    int a,b,c,big;
    scanf("%d%d%d",&a,&b,&c);

    printf("Biggest is %d",(big=(a>b?(a>c?a:c):(b>c?b:c))));


    return 0;

}