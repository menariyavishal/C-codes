#include<stdio.h>
#include<string.h>

/*Using strcat() function*/

int main()
{
    char s1[100];
    char s2[100];
    printf("Enter your  First name\n");
    scanf("%s",&s1);

    printf("Enter your  Last name\n");

    scanf("%s",&s2);
    printf("Afte using strcat function:\n");

    
    puts(strcat(s1,s2));

    return 0;

}