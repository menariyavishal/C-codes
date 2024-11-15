#include<stdio.h>

int main()
{
    int n;
    printf("Enter value of n::\n");
    scanf("%d",&n);
    int arr[n];
    int next = 1;
    if(n>0)
    {
        for(int i = 0;i<n;i++)
        {
            printf("Enter the value::\n");
            scanf("%d",&arr[i]);
        }

       
        // BUBBLE SORT;
        while(next<n)
        {
            for(int i = 0;i<n-next;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    int tmp = arr[i+1];
                    arr[i+1]=arr[i];
                    arr[i]=arr[i+1];
                }
            }
            next++;
        }
        int i;
        for( i =0;i<n;i++)
        {
            printf("%d ",arr[i]);

        }
        
        
         printf("\nminimum number is ::%d\n",arr[0]);
         printf("maximum number is ::%d\n",arr[n-1]);
   
    }
    else
    {
        printf("Invalid Input!!\n");
    }






    return 0;
}