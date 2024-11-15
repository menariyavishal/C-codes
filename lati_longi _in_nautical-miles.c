#include<stdio.h>
#include<math.h>

int main()
{
    float L1,L2,G1,G2,D;
    printf("Enter the Latitude L1:\n");
    scanf("%f",&L1);
    printf("Enter the Latitude L2:\n");
    scanf("%f",&L2);
    printf("Enter the Longitude G1:\n");
    scanf("%f",&G1);
    printf("Enter the Longitude G2:\n");
    scanf("%f",&G2);

    printf("(L1,L2) = (%.2f,%.2f)\n",L1,L2);
    printf("(G1,G2) = (%.2f,%.2f)\n",G1,G2);

    D = (3963) * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2-G1) );

    printf("Distance in Nautical miles D = %.2f\n",D);

    return 0;


}
