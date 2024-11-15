#include<stdio.h>
#include<string.h>

/*Using strrev() function*/

int main()
{
    char s1[100];
    char s2[100];
    printf("Enter your  First name\n");
    scanf("%s",&s1);

    printf("Enter your  Last name\n");

    scanf("%s",&s2);
    printf("Afte using strrev function:\n");
    printf("The reverse string is:\n");


    puts(strrev(s1));
    printf("\n");

    puts(strrev(s2));



    return 0;

}