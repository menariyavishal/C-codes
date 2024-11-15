#include<stdio.h>

int main()
{
    printf("Converting Kilometers into other forms:\n");
    double  km,m,cm,inch,feet;
    printf("Enter the distance in Kilometers:\n");
    scanf("%lf",&km);
                        // Basic Formulae
                        // m = km * 1000
                        // cm = m * 100
                        // inch = cm/2.54
                        //feet = inch/12
    m = km *1000;
    cm = m * 100;
    inch = cm/2.54;
    feet = inch/12;

    printf("Distance in meters = %lf\n",m);
    printf("Distance in centimeters = %lf\n",cm);
    printf("Distance in Inches = %lf\n",inch);
    printf("Distance in Feet = %lf\n",feet);


    return 0;

}
