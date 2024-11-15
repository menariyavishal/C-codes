#include<stdio.h>
#include<string.h>

/*Using strcpy() function*/

int main()
{
    char s1[100];
    char s2[100];
    printf("Enter your name\n");
    scanf("%s",&s1);
    printf("Afte using strcpy function:\n");

    
    puts(strcpy(s2,s1));

    return 0;

}
