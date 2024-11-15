#include<stdio.h>
#include<math.h>

int main()
{
    int x, y, r,fie;

    printf("Enter the value of x and y\n");
    scanf("%d%d",&x,&y);
    printf("(x,y) = (%d,%d)\n",x,y);

    r = sqrt((x * x) + (y * y) );

     fie =atan (y/x);
    printf("r = %d\n %c = %d\n",r,157,fie);
    printf("(r,%c) = (%d,%d)\n",157,x,y);

    return 0;




}
