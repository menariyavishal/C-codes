#include<stdio.h>
#include<string.h>

int main()
{
    char n[20] ="Vishal";
    char n1[20];
    printf("%s\t%s\n",n);
    puts(strcpy(n1,n));
    //printf("%s",strcpy(n1,n));

    return 0;

}
