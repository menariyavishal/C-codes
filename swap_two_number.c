#include<stdio.h>

int main()
{
    int C,D;
    printf("Enter the value of C and D\n");
    scanf("%d%d",&C,&D);
    printf("Before swaping:\n%d,%d\n",C,D);

    int temp = C;
    C = D;
    D = temp;
     printf("After swaping:\n%d,%d\n",C,D);

     return 0;

}
