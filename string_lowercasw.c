#include<stdio.h>
#include<string.h>

/*Using strlwr() function*/

int main()
{
    char s1[100];
    char s2[100];
    printf("Enter your  First name in Capital letters\n");
    scanf("%s",&s1);

    printf("Enter your  Last name in Capital letters\n");

    scanf("%s",&s2);
    printf("Afte using strlwr function:\n");

    puts(strlwr(s1));
    puts(strlwr(s2));


    return 0;

}