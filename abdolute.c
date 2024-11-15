//Absoute value of a value input by user

#include<stdio.h>
int abslte(float val);


int main()
{
    float val;
    printf("Enter a value:\n");
    scanf("%f",&val);
    int cnge = abslte(val);
    printf("%d",cnge);

    return 0;
}

int abslte(float val)
{
    return val;
}