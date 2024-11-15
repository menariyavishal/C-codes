#include<stdio.h>
#include<math.h>

int main()
{
    float t,v,wcf;
    printf("Enter the value of temperature and velocity:\n");
    scanf("%f%f",&t,&v);

    wcf = 35.5 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v,0.16);
    printf("Wind chill factor = %f\n",wcf);

    return 0;
}
