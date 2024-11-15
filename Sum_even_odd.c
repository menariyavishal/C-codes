#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int arr[n];
    int i;

    for( i = 0;i<=n;i++)
    {
        printf("Enter values of Array:\n");
        scanf("%d",&arr[i]);

    }

    printf("arr[%d] = {",n);

    for( i = 0;i<=n;i++)
    {
        // printf("Enter values of Array:\n");
        // scanf("%d",&arr[i]);
        printf("%d,",arr[i]);

    }
        printf("}\n");

        int sum_even=0;
        for(i = 0;i<=n;i++)
        {
            if(arr[i]%2==0)
            {
                sum_even = sum_even + arr[i];
            }
        }

        printf("Sum of even numbers = %d\n",sum_even);

        int sum_odd=0;
        for(i = 0;i<=n;i++)
        {
            if(arr[i]%2!=0)
            {
                sum_odd = sum_odd + arr[i];
            }
        }

        printf("Sum of odd numbers = %d\n",sum_odd);


        if(sum_even>sum_odd)
        {
            printf("%d",sum_even);
        }
        else
        {
            printf("%d",sum_odd);
        }

    return 0;
}