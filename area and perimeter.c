#include<stdio.h>
#include<math.h>

void main()
{
     printf("Area and perimeter of Square--\n");
    int a;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    int area_sq = a*a;
    int peri_sq = 4*a;
    printf("area = %d\n perimeter = %d",area_sq,peri_sq);
    printf("\n\n");

    printf("Area and perimeter of rectangle--\n");
    int l,b;
    printf("Enter the value of l and b:\n");
    scanf("%d%d",&l,&b);
    int area_rec  = l * b;
    int peri_rec = 2 * (l+b);
    printf("area = %d\n perimeter = %d\n",area_rec,peri_rec);
     printf("\n\n");

     printf("Area and perimeter of Cicle--\n");
    int r;
    printf("enter the value of r:\n");
    scanf("%d",&r);
    const float pi = 3.14;
    float area_crc = pi * r *r;
    float peri_crc = 2 * pi * r;
    printf("area = %f\n perimeter = %f",area_crc,peri_crc);
    printf("\n\n");

     printf("Area and perimeter of a Right angle Triangle--\n");
    int m,n;
    printf("enter the value of m and n:\n");
    scanf("%d%d",&m,&n);
    float area_Tri = (m*n)/(2);
     float peri_Tri = (m+n) + sqrt((m*n)+(n*n));
    printf("area = %f\n perimeter = %f",area_Tri,peri_Tri);
    printf("\n\n");






}
