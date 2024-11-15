#include<stdio.h>
#include<string.h>

/*Using strupr() function*/

int main()
{
    char s1[100];
    char s2[100];
    printf("Enter your  First name in small letters\n");
    scanf("%s",&s1);

    printf("Enter your  Last name in small letters\n");

    scanf("%s",&s2);
    printf("Afte using strupr function:\n");

    puts(strupr(s1));
    puts(strupr(s2));

    return 0;

}