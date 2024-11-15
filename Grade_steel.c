#include<stdio.h>

int main()
{
    int hrd,tenslie_strgh;
    float crbn_cntnt;

    printf("Enter Hardness, Caron Content and Tenslie strength of the steel\n");
    scanf("%d%f%d",&hrd,&crbn_cntnt,&tenslie_strgh);

    if(hrd>50 && crbn_cntnt<0.7 && tenslie_strgh>5600)
    {
        printf("Grade is 10\n");
    }
    else if(hrd>50 && crbn_cntnt<0.7)
    {
        printf("Grade is 9\n");
    }
    else if(crbn_cntnt<0.7 && tenslie_strgh>5600)
    {
        printf("Grade is 8\n");
    }
    else if(hrd>50 && tenslie_strgh>5600)
    {
        printf("Grade is 7\n");
    }
    else if(hrd>50 || crbn_cntnt<0.7 || tenslie_strgh>5600)
    {
        printf("Grade is 6\n");
    }
    else
    {
        printf("Grade is 5\n");
    }

    return 0;
}