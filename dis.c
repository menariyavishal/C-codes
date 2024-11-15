#include <stdio.h>
#include <math.h>

int main(){
    do a, b, c,r1, r2, dis;

    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);

    dis = sqrt((b * b) - (4 * a * c));
    printf("Value of discriminent is %lf.\n", dis);

    if (dis>0){
        /*float r01 = 2*a;
        double r1 = -(b+dis);
        double r2 = -(b-dis);
        float r11 = r1/r01;
        float r22 = r2/r01;*/
        r1 = (- b + dis) / (2 * a);
        r2 = (- b - dis) / (2 * a);
        printf("\nRoot1 = %lf.", r1);
        printf("\nRoot2 = %lf.", r2);
    }
    else{
        printf("wdhgefygrfyg");
    }











    return 0;




}
