#include<stdio.h>
#include<math.h>

int main()
{
    float agl;
    printf("Enter the Angle:\n");
    scanf("%f",&agl);

    printf("\n Following are the Trigonometric Ratios:\n");
    printf("sin(%.2f) = %.2f\n",agl,sin(agl));
    printf("cos(%.2f) = %.2f\n",agl,cos(agl));
    printf("tan(%.2f) = %.2f\n",agl,tan(agl));
    printf("cot(%.2f) = %.2f\n",agl,cos(agl)/sin(agl));
    printf("sec(%.2f) = %.2f\n",agl,1/cos(agl));
    printf("cosec(%.2f) = %.2f\n",agl,1/sin(agl));



    return 0;
}
