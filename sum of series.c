#include<stdio.h>
#include<math.h>

void main()
{
    int n,x;
    printf("Enter the value of n and x:\n");
    scanf("%d%d",&n,&x);
    int sum = 1,term = 1;
    for(int i =1;i<=n;i++)
    {
        term = -(term*x);
        sum = sum + term;
    }
    printf("%d\n",sum);


}
