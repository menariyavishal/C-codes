#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any character!!\n");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
    {
        printf("Character is upper case\n");
    }

    else if(ch>=97 && ch<=122)
    {
        printf("Character is lower case\n");
    }

    else if(ch>=48 && ch<=57)
    {
        printf("Character is Numeric\n");
    }

    else if((ch>=0 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=123 && ch<=127))
    {
        printf("It is a special symbols\n");
    }

    else
    {
        printf("Invalid Input try again!!\n");
    }
    




    return 0;
}