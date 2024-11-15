#include<stdio.h>

int roman(int y,int k,char ch);

int main()
{
    int yr;
    printf("Enter any Year:\n");

    scanf("%d",&yr);
  yr = roman(yr,1000,'m');
  yr = roman(yr,500,'d');
     yr = roman(yr,100,'c');
     yr = roman(yr,50,'l');
     yr = roman(yr,10,'x');
     yr = roman(yr,5,'v');
     yr = roman(yr,1,'i');




    return 0;
}

  int roman(int y,int k,char ch)
 {
     int next = y/k;

     for(int i = 1;i<=next;i++)
     {
         printf("%c",ch);

     }

     return (y%k);


 }
