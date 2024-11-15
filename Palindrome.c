#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    printf("Enter a string to check wheather it is a Palindrome or not!!\n");
    scanf("%s",&str1);
    strcpy(str2,str1);
    strrev(str2);

    if(strcmp(str1,str2)==0)
    {
        printf("It is a Palindrome...\n");
    }
    else
    {
        printf("Not a Palindrome...\n");
    }


    
    return 0;
}
