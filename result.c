#include<stdio.h>

int main()
{
    int size;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int marks[size];
    int sum=0;

    for(int i =0;i<size;i++)
    {
        printf("Enter marks of subject %d\n",i+1);
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }

    int per = sum*100/500;
    printf("%d \n",per);

    if(per>=60)
    {
        printf("First division!!\n");
    }
    else if(per<59 && per>=50)
    {
        printf("second division!!\n");
    }
    else if(per<49 && per>=40)
    {
        printf("Third division!!\n");
    }
    else
    {
        printf("Fail!!\n");
    }


    
    return 0;
}