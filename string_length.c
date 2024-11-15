#include<stdio.h>
#include<string.h>

/*Using strlen() function*/

int main()
{
    char s1[100];
    char s2[100];
    printf("Enter your  First name\n");
    scanf("%s",&s1);

    printf("Enter your  Last name\n");

    scanf("%s",&s2);
    printf("Afte using strlen function:\n");

    
    printf("The length of s1 is : %d\n",strlen(s1));
    printf("The length of s2 is : %d\n",strlen(s2));


    return 0;

}